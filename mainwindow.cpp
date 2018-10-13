#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gerenciaInfo.h"
#include "les.h"
#include <string>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //ui->stackedWidget->setCurrentIndex(0);
    ui->setupUi(this);

    ui->btnExit->setEnabled(false);
    ui->btnSettings->setEnabled(false);
    ui->btnAdd->setEnabled(false);
    ui->stackedWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnLogin_clicked()
{
    LES* l = new LES();



    int i = 0;

    for (i = 0; i < 30; i++){
        ui->txtLESQ->setText(QVariant(l->imprimeInt(i)).toString());
        i++;
    }

    if(l->imprimeDisp() == true){
        ui->txtLESD->setText("Disponível");
    }
    else{
        ui->txtLESD->setText("Ocupado");
    }


    gerenciaInfo v;
    if(v.verificaUsuario()){
          ui->stackedWidget->setCurrentIndex(2);
          ui->btnExit->setEnabled(true);
          ui->btnSettings->setEnabled(true);
          ui->btnAdd->setEnabled(true);

    }
    else{
        ui->txtErro->setText("Login ou senha incorretos");
    }
}

void MainWindow::on_btnExit_clicked()
{
    gerenciaInfo v;
    if(v.verificaSenha()){
        ui->stackedWidget->setCurrentIndex(0);
        ui->btnExit->setEnabled(false);
        ui->btnSettings->setEnabled(false);
        ui->btnAdd->setEnabled(false);
    }
    else{
        ui->txtErro->setText("Nenhuma senha de gerencia");
    }


}

void MainWindow::on_commandLinkButton_clicked()
{

    ui->stackedWidget->setCurrentIndex(1);
    ui->btnExit->setEnabled(true);
    ui->comboBoxCargos->addItem(" ");
    ui->comboBoxCargos->addItem("Gerente");
    ui->comboBoxCargos->addItem("Recepcionista");
}

void MainWindow::on_btnLogin_2_clicked()
{

}
