#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gerenciaInfo.h"
#include "les.h"
#include "lde.h"
#include "gerenciaInfo.h"
#include <string>
#include <iostream>
#include <QMessageBox>
#include <QDebug>
#include <QDir>
#include <QInputDialog>
#include <QList>

using namespace std;

LDE l;
gerenciaInfo g;
LES* h = new LES();

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->btnExit->setEnabled(false);
    ui->btnSettings->setEnabled(false);
    ui->btnAdd->setEnabled(false);

    l.carregaLDE();
    h->carregaLES();
    l.imprime();

    if(!(g.verificaSenha()))
        ui->stackedWidget->setCurrentIndex(4);
    else
        ui->stackedWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnLogin_clicked()
{
   /*if(ui->txtUser->text() == "" || ui->txtSenha->text() == ""){
        ui->txtErro->setText("Login e/ou senha incorretos");
        return;
    }*/
    if(g.verificaUsuario(ui->txtUser->text(),ui->txtSenha->text())){
          ui->stackedWidget->setCurrentIndex(2);
          ui->btnExit->setEnabled(true);
          ui->btnSettings->setEnabled(true);
          ui->btnAdd->setEnabled(true);
          ui->txtBtnSair->setText("Sair");
    }
    else{
        ui->txtErro->setText("Login e/ou senha incorretos");
    }
}

void MainWindow::on_btnExit_clicked()
{
    ui->txtTeste->setText("");
    if(ui->stackedWidget->currentIndex() == 3){
        ui->stackedWidget->setCurrentIndex(2);
        return;
    }

    if(ui->stackedWidget->currentIndex() == 5){
        ui->stackedWidget->setCurrentIndex(2);
        return;
    }

    if(ui->stackedWidget->currentIndex() == 2){
        ui->btnSettings->setEnabled(false);
        ui->btnAdd->setEnabled(false);
    }

    if(ui->stackedWidget->currentIndex() == 7){
        ui->stackedWidget->setCurrentIndex(6);
        return;
    }


    ui->stackedWidget->setCurrentIndex(0);

    ui->txtUser->setText("");
    ui->txtSenha->setText("");
}

void MainWindow::on_commandLinkButton_clicked()
{

    QString text = QInputDialog::getText(this, tr("Senha"),
                                             tr("Senha de gerencia: "), QLineEdit::Password);

    //cout << g.senhaUser.toStdString() << endl;

    g.verificaSenha();

    if(text != ""){
        if(text == g.senhaUser){
            ui->stackedWidget->setCurrentIndex(1);
            ui->btnExit->setEnabled(true);
            if(ui->comboBoxCargos->count() == 0){
                ui->comboBoxCargos->addItem("Gerente");
                ui->comboBoxCargos->addItem("Recepcionista");
            }
        }
        else{
            QMessageBox msgBox;
            msgBox.setText("Senha incorreta, tente novamente.");
            msgBox.exec();
        }
    }


}

void MainWindow::on_btnAdd_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);

    ui->comboBoxQuartos->clear();

    h->carregaLES();

    for (int i = 0; i < 30; i++){
        if(h->imprimeDisp(i) == true)
            ui->comboBoxQuartos->addItem(QVariant(h->imprimeInt(i)).toString());
    }

    if(ui->comboBoxQuartos->count() == 0){
        ui->comboBoxQuartos->setEnabled(false);
        ui->txtDisp->setText("Não há quartos disponíveis");
        ui->btnSalvaReserva->setEnabled(false);
    }
}


void MainWindow::on_btnSalvarFunc_clicked()
{
    if(ui->txtNome->text() == "" || ui->txtUserFunc->text() == "" || ui->txtSenhaFunc->text() == "" || ui->comboBoxCargos->currentText() == "" || ui->txtRegistro->text() == ""){
        ui->lblVerifica->setText("Por favor, preencha todos os campos.");
        return;
    }
    g.cadastraFunc(ui->txtNome->text(),ui->txtUserFunc->text(),ui->txtSenhaFunc->text(),ui->comboBoxCargos->currentText(),ui->txtRegistro->text());
    ui->stackedWidget->setCurrentIndex(0);

    ui->txtNome->setText("");
    ui->txtSenhaFunc->setText("");
    ui->txtRegistro->setText("");
    ui->txtUserFunc->setText("");
}

void MainWindow::on_btnSalvarSenha_clicked()
{
    if(ui->txtSenhaGerencia->text() == "" || ui->txtConfirmaSenha->text() == ""){
        ui->lblVerificaSenhas->setText("Digite ao menos um caracter de senha.");
        return;
    }

    if(ui->txtSenhaGerencia->text() == ui->txtConfirmaSenha->text()){
        g.salvaSenha(ui->txtSenhaGerencia->text());
        ui->stackedWidget->setCurrentIndex(0);
    }
    else{
        ui->lblVerificaSenhas->setText("As senhas divergem. Digite novamente.");
    }
}

void MainWindow::on_btnSalvaReserva_clicked()
{
    if(ui->txtNomeCliente->text() == "" || ui->txtCPFCliente->text() == "" || ui->txtContatoCliente->text() == "" || ui->txtEmailCliente->text() == "" || ui->txtEnderecoCliente->text() == "" || ui->txtIdadeCliente->text() == "" || ui->txtDuracao->text() == "" || ui->buttonGroupTipos->checkedButton() == NULL){
        ui->lblVerificaCliente->setText("Por favor, preencha/selecione todos os campos.");
        return;
    }

    int tipo;

    if(ui->buttonGroupTipos->checkedButton()->text() == "Simples"){
        tipo = 1;
    }
    if(ui->buttonGroupTipos->checkedButton()->text() == "Intermediária"){
        tipo = 2;
    }
    if(ui->buttonGroupTipos->checkedButton()->text() == "Luxo"){
        tipo = 3;
    }
    if(ui->buttonGroupTipos->checkedButton()->text() == "Platinum"){
        tipo = 4;
    }

    l.insere(ui->txtNomeCliente->text().toStdString(),ui->txtIdadeCliente->text().toInt(),ui->txtCPFCliente->text().toInt(),ui->txtEnderecoCliente->text().toStdString(),ui->txtEmailCliente->text().toStdString(), ui->txtContatoCliente->text().toStdString(),ui->txtDuracao->text().toInt(),ui->comboBoxQuartos->itemText(ui->comboBoxQuartos->currentIndex()).toInt(),true, tipo);

    ui->stackedWidget->setCurrentIndex(2);

    l.salvaClientes();

    ui->txtNomeCliente->setText("");
    ui->txtIdadeCliente->setText("");
    ui->txtCPFCliente->setText("");
    ui->txtEmailCliente->setText("");
    ui->txtEnderecoCliente->setText("");
    ui->txtContatoCliente->setText("");
    ui->txtDuracao->setText("");
    ui->buttonGroupTipos->checkedButton()->setCheckable(false);

}


void MainWindow::on_btnClientes_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);

    //ui->tableWidgetClientes->clear();

    ui->tableWidgetClientes->setRowCount(0);

    string tipo;

    No *atual = l.primeiro;
    while (atual) {
        if(atual->c.tipo == 1){
            tipo = "Simples";
        }
        if(atual->c.tipo == 2){
            tipo = "Intermediário";
        }
        if(atual->c.tipo == 3){
            tipo = "Luxo";
        }
        if(atual->c.tipo == 4){
            tipo = "Platinum";
        }

      if(atual->c.ativo == true){
          ui->tableWidgetClientes->insertRow(ui->tableWidgetClientes->rowCount());
          ui->tableWidgetClientes->setItem(ui->tableWidgetClientes->rowCount()-1,0,new QTableWidgetItem(QString::fromStdString(atual->c.nome)));
          ui->tableWidgetClientes->setItem(ui->tableWidgetClientes->rowCount()-1,1,new QTableWidgetItem(QVariant(atual->c.quarto).toString()));
          ui->tableWidgetClientes->setItem(ui->tableWidgetClientes->rowCount()-1,2,new QTableWidgetItem(QVariant(atual->c.duracao).toString()));
          ui->tableWidgetClientes->setItem(ui->tableWidgetClientes->rowCount()-1,3,new QTableWidgetItem(QString::fromStdString(atual->c.contato)));
          ui->tableWidgetClientes->setItem(ui->tableWidgetClientes->rowCount()-1,4,new QTableWidgetItem(QString::fromStdString(tipo)));
      }
      atual = atual->prox;
     }
}

void MainWindow::on_btnCheckout_clicked()
{
    if(!(ui->tableWidgetClientes->currentIndex().isValid())){
        ui->txtTeste->setText("Selecione ao menos um cliente para que o checkout possa ser realizado.");
    }
    else{
        l.alteraCliente((ui->tableWidgetClientes->item(ui->tableWidgetClientes->currentRow(),ui->tableWidgetClientes->currentColumn())->text()).toStdString());
        ui->txtTeste->setText("Checkout realizado. Apenas clientes presentes no hotel sendo mostrados.");
        on_btnClientes_clicked();

    }

    //cout << (ui->tableWidgetClientes->item(ui->tableWidgetClientes->currentRow(),ui->tableWidgetClientes->currentColumn())->text()).toStdString();
}


void MainWindow::on_btnSettings_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

void MainWindow::on_btnCheckout_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);

    ui->tableWidgetTodos->setRowCount(0);

    string tipo,presente;

    No *atual = l.primeiro;
    while (atual) {
        if(atual->c.tipo == 1){
            tipo = "Simples";
        }
        if(atual->c.tipo == 2){
            tipo = "Intermediário";
        }
        if(atual->c.tipo == 3){
            tipo = "Luxo";
        }
        if(atual->c.tipo == 4){
            tipo = "Platinum";
        }

        if(atual->c.ativo == true)
            presente = "Sim";
        if(atual->c.ativo == false)
            presente = "Nao";


        ui->tableWidgetTodos->insertRow(ui->tableWidgetTodos->rowCount());
        ui->tableWidgetTodos->setItem(ui->tableWidgetTodos->rowCount()-1,0,new QTableWidgetItem(QString::fromStdString(atual->c.nome)));
        ui->tableWidgetTodos->setItem(ui->tableWidgetTodos->rowCount()-1,1,new QTableWidgetItem(QVariant(atual->c.idade).toString()));
        ui->tableWidgetTodos->setItem(ui->tableWidgetTodos->rowCount()-1,2,new QTableWidgetItem(QVariant(atual->c.quarto).toString()));
        ui->tableWidgetTodos->setItem(ui->tableWidgetTodos->rowCount()-1,3,new QTableWidgetItem(QVariant(atual->c.duracao).toString()));
        ui->tableWidgetTodos->setItem(ui->tableWidgetTodos->rowCount()-1,4,new QTableWidgetItem(QString::fromStdString(tipo)));
        ui->tableWidgetTodos->setItem(ui->tableWidgetTodos->rowCount()-1,5,new QTableWidgetItem(QString::fromStdString(presente)));
        ui->tableWidgetTodos->setItem(ui->tableWidgetTodos->rowCount()-1,6,new QTableWidgetItem(QVariant(atual->c.cpf).toString()));
        ui->tableWidgetTodos->setItem(ui->tableWidgetTodos->rowCount()-1,7,new QTableWidgetItem(QString::fromStdString(atual->c.contato)));
        ui->tableWidgetTodos->setItem(ui->tableWidgetTodos->rowCount()-1,8,new QTableWidgetItem(QString::fromStdString(atual->c.endereco)));
        ui->tableWidgetTodos->setItem(ui->tableWidgetTodos->rowCount()-1,9,new QTableWidgetItem(QString::fromStdString(atual->c.email)));
        atual = atual->prox;
     }
}
