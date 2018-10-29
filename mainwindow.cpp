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
#include <QInputDialog>
#include <QDir>

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
   if(ui->txtUser->text() == "" || ui->txtSenha->text() == ""){
        ui->txtErro->setText("Login e/ou senha incorretos");
        return;
    }
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

    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_commandLinkButton_clicked()
{

    QString text = QInputDialog::getText(this, tr("Senha"),
                                             tr("Senha de gerencia: "), QLineEdit::Normal,
                                             QDir::home().dirName());

    //cout << g.senhaUser.toStdString() << endl;

    g.verificaSenha();


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
}

void MainWindow::on_btnSalvarSenha_clicked()
{
    if(ui->txtSenhaGerencia->text() == ui->txtConfirmaSenha->text()){
        g.salvaSenha(ui->txtSenhaGerencia->text());
        ui->stackedWidget->setCurrentIndex(0);
    }
    else{
        ui->lblVerificaSenhas->setText("As senhas divergem. Digite novamente");
    }
}

void MainWindow::on_btnSalvaReserva_clicked()
{
    l.insere(ui->txtNomeCliente->text().toStdString(),ui->txtIdadeCliente->text().toInt(),ui->txtCPFCliente->text().toInt(),ui->txtEmailCliente->text().toStdString(), ui->txtContatoCliente->text().toStdString(),ui->txtDuracao->text().toInt(),ui->comboBoxQuartos->itemText(ui->comboBoxQuartos->currentIndex()).toInt(),true);

    ui->stackedWidget->setCurrentIndex(2);

    l.salvaClientes();
}


void MainWindow::on_btnClientes_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);

    No *atual = l.primeiro;
    while (atual) {
      cout << atual->c.nome << endl;
      ui->tableWidgetClientes->insertRow(ui->tableWidgetClientes->rowCount());
      ui->tableWidgetClientes->setItem(ui->tableWidgetClientes->rowCount()-1,0,new QTableWidgetItem(QString::fromStdString(atual->c.nome)));
      atual = atual->prox;
     }
}
