#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gerenciaInfo.h"
#include "les.h"
#include "lde.h"
#include "gerenciaInfo.h"
#include <string>
#include <iostream>
#include <QMessageBox>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{


    //ui->stackedWidget->setCurrentIndex(0);
    ui->setupUi(this);

    ui->btnExit->setEnabled(false);
    ui->btnSettings->setEnabled(false);
    ui->btnAdd->setEnabled(false);

    gerenciaInfo g;

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


    //cout << "\n\n\n";
    //cout << "Na tela: ";

    /*if(ui->comboQuartos->size() == 0){

    }*/


    /*if(ui->comboQuartos->count() == 0){
       ui->comboQuartos->setEnabled(false);
       ui->txtDisp->setText("Não há quartos disponíveis");
    }*/


   /* if(l->imprimeDisp() == true){
        //ui->txtLESD->setText("Disponível");
    }
    else{
        //ui->txtLESD->setText("Ocupado");
    }*/


    gerenciaInfo v;
    if(v.verificaUsuario()){
          ui->stackedWidget->setCurrentIndex(2);
          ui->btnExit->setEnabled(true);
          ui->btnSettings->setEnabled(true);
          ui->btnAdd->setEnabled(true);
          ui->txtBtnSair->setText("Sair");
          gerenciaInfo g;
          g.verificaSenha();
    }
    else{
        ui->txtErro->setText("Login ou senha incorretos");
    }
}

void MainWindow::on_btnExit_clicked()
{


    if(ui->stackedWidget->currentIndex() == 3){
        ui->stackedWidget->setCurrentIndex(2);
        return;
    }

    if(ui->stackedWidget->currentIndex() == 2){
        ui->btnSettings->setEnabled(false);
        ui->btnAdd->setEnabled(false);
    }

    ui->stackedWidget->setCurrentIndex(0);


    /*
    gerenciaInfo v;
    if(v.verificaSenha()){
        ui->stackedWidget->setCurrentIndex(0);
        ui->btnExit->setEnabled(false);
        ui->btnSettings->setEnabled(false);
        ui->btnAdd->setEnabled(false);
    }
    else{
        ui->txtErro->setText("Nenhuma senha de gerencia");
    }*/


}

void MainWindow::on_commandLinkButton_clicked()
{
    //if()
    ui->stackedWidget->setCurrentIndex(1);
    ui->btnExit->setEnabled(true);
    if(ui->comboBoxCargos->count() == 0){
        ui->comboBoxCargos->addItem("Gerente");
        ui->comboBoxCargos->addItem("Recepcionista");
    }

}


void MainWindow::on_btnAdd_clicked()
{

    LES* l = new LES();
    ui->stackedWidget->setCurrentIndex(3);

    if(ui->comboBoxQuartos->count() == 0){
        for (int i = 0; i < 30; i++){
            if(l->imprimeDisp(i) == true)
                ui->comboBoxQuartos->addItem(QVariant(l->imprimeInt(i)).toString());
    }

    if(ui->comboBoxQuartos->count() == 0){
        ui->comboBoxQuartos->setEnabled(false);
        ui->txtDisp->setText("Não há quartos disponíveis");
        ui->btnSalvaReserva->setEnabled(false);
    }

    }
}

void MainWindow::on_btnSalvarFunc_clicked()
{
    gerenciaInfo g;
    g.cadastraFunc(ui->txtNome->text(),ui->txtUserFunc->text(),ui->txtSenhaFunc->text(),ui->comboBoxCargos->currentText(),ui->txtRegistro->text());
}

void MainWindow::on_btnSalvarSenha_clicked()
{
    gerenciaInfo g;
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
    LDE l;
    No** n;

    l.insere(n,ui->txtNomeCliente->text().toStdString(),ui->txtIdadeCliente->text().toInt(),ui->txtCPFCliente->text().toInt(),ui->txtEmailCliente->text().toStdString(), ui->txtContatoCliente->text().toStdString(),ui->txtDuracao->text().toInt(),ui->comboBoxQuartos->itemText(ui->comboBoxQuartos->currentIndex()).toInt(),true);

    ui->stackedWidget->setCurrentIndex(2);
}
