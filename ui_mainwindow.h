/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QStackedWidget>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *btnLogin;
    QCommandLinkButton *commandLinkButton;
    QLineEdit *txtSenha;
    QLineEdit *txtUser;
    QPushButton *imgLogin;
    QLabel *txtErro;
    QWidget *page_3;
    QPushButton *btnSalvarFunc;
    QLabel *label_9;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLineEdit *txtSenhaFunc;
    QLineEdit *txtNome;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *txtUserFunc;
    QLabel *label_6;
    QLabel *label_7;
    QComboBox *comboBoxCargos;
    QLabel *label_8;
    QLineEdit *txtRegistro;
    QLabel *lblVerifica;
    QWidget *page_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *txtBtnSair;
    QPushButton *btnClientes;
    QLabel *label_21;
    QWidget *page_4;
    QPushButton *btnSalvaReserva;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_12;
    QLineEdit *txtDuracao;
    QLabel *label_18;
    QLineEdit *txtEmailCliente;
    QLineEdit *txtIdadeCliente;
    QLineEdit *txtContatoCliente;
    QLabel *label_17;
    QLineEdit *txtCPFCliente;
    QLabel *label_15;
    QLineEdit *txtNomeCliente;
    QLabel *label_16;
    QLabel *label_19;
    QLineEdit *txtEnderecoCliente;
    QLabel *label_14;
    QComboBox *comboBoxQuartos;
    QLabel *label_20;
    QLabel *txtDisp;
    QLabel *label_13;
    QWidget *page_5;
    QPushButton *btnSalvarSenha;
    QLineEdit *txtSenhaGerencia;
    QLabel *label_2;
    QLabel *label_5;
    QLineEdit *txtConfirmaSenha;
    QLabel *lblVerificaSenhas;
    QWidget *page_6;
    QTableWidget *tableWidgetClientes;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btnAdd;
    QPushButton *btnSettings;
    QPushButton *btnExit;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(750, 400);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(80, -10, 670, 411));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        btnLogin = new QPushButton(page);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        btnLogin->setGeometry(QRect(235, 280, 200, 41));
        commandLinkButton = new QCommandLinkButton(page);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(470, 340, 191, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Roboto"));
        font.setPointSize(8);
        commandLinkButton->setFont(font);
        txtSenha = new QLineEdit(page);
        txtSenha->setObjectName(QString::fromUtf8("txtSenha"));
        txtSenha->setGeometry(QRect(175, 230, 320, 25));
        txtUser = new QLineEdit(page);
        txtUser->setObjectName(QString::fromUtf8("txtUser"));
        txtUser->setGeometry(QRect(175, 197, 320, 25));
        imgLogin = new QPushButton(page);
        imgLogin->setObjectName(QString::fromUtf8("imgLogin"));
        imgLogin->setEnabled(false);
        imgLogin->setGeometry(QRect(215, 20, 240, 151));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icons/icons8-senha-100 (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        imgLogin->setIcon(icon);
        imgLogin->setIconSize(QSize(130, 130));
        imgLogin->setFlat(true);
        txtErro = new QLabel(page);
        txtErro->setObjectName(QString::fromUtf8("txtErro"));
        txtErro->setGeometry(QRect(243, 345, 191, 21));
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        btnSalvarFunc = new QPushButton(page_3);
        btnSalvarFunc->setObjectName(QString::fromUtf8("btnSalvarFunc"));
        btnSalvarFunc->setGeometry(QRect(235, 280, 200, 41));
        label_9 = new QLabel(page_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setEnabled(true);
        label_9->setGeometry(QRect(1, 310, 41, 21));
        gridLayoutWidget_2 = new QWidget(page_3);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(80, 110, 511, 81));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        txtSenhaFunc = new QLineEdit(gridLayoutWidget_2);
        txtSenhaFunc->setObjectName(QString::fromUtf8("txtSenhaFunc"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(txtSenhaFunc->sizePolicy().hasHeightForWidth());
        txtSenhaFunc->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(txtSenhaFunc, 2, 1, 1, 1);

        txtNome = new QLineEdit(gridLayoutWidget_2);
        txtNome->setObjectName(QString::fromUtf8("txtNome"));
        sizePolicy.setHeightForWidth(txtNome->sizePolicy().hasHeightForWidth());
        txtNome->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(txtNome, 0, 1, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 1, 0, 1, 1);

        label_11 = new QLabel(gridLayoutWidget_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 2, 0, 1, 1);

        txtUserFunc = new QLineEdit(gridLayoutWidget_2);
        txtUserFunc->setObjectName(QString::fromUtf8("txtUserFunc"));
        sizePolicy.setHeightForWidth(txtUserFunc->sizePolicy().hasHeightForWidth());
        txtUserFunc->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(txtUserFunc, 1, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 0, 2, 1, 1);

        comboBoxCargos = new QComboBox(gridLayoutWidget_2);
        comboBoxCargos->setObjectName(QString::fromUtf8("comboBoxCargos"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBoxCargos->sizePolicy().hasHeightForWidth());
        comboBoxCargos->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(comboBoxCargos, 0, 3, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 1, 2, 1, 1);

        txtRegistro = new QLineEdit(gridLayoutWidget_2);
        txtRegistro->setObjectName(QString::fromUtf8("txtRegistro"));
        sizePolicy.setHeightForWidth(txtRegistro->sizePolicy().hasHeightForWidth());
        txtRegistro->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(txtRegistro, 1, 3, 1, 1);

        lblVerifica = new QLabel(page_3);
        lblVerifica->setObjectName(QString::fromUtf8("lblVerifica"));
        lblVerifica->setGeometry(QRect(210, 230, 251, 20));
        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 90, 121, 21));
        label_4 = new QLabel(page_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 200, 101, 21));
        txtBtnSair = new QLabel(page_2);
        txtBtnSair->setObjectName(QString::fromUtf8("txtBtnSair"));
        txtBtnSair->setGeometry(QRect(0, 310, 41, 21));
        btnClientes = new QPushButton(page_2);
        btnClientes->setObjectName(QString::fromUtf8("btnClientes"));
        btnClientes->setGeometry(QRect(570, 300, 59, 59));
        btnClientes->setMinimumSize(QSize(0, 0));
        btnClientes->setMaximumSize(QSize(16777215, 16777215));
        btnClientes->setStyleSheet(QString::fromUtf8("border-color: rgb(46, 52, 54);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/icons/icons8-usu\303\241rio-100.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnClientes->setIcon(icon1);
        btnClientes->setIconSize(QSize(30, 30));
        btnClientes->setFlat(true);
        label_21 = new QLabel(page_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(230, 320, 331, 20));
        stackedWidget->addWidget(page_2);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        btnSalvaReserva = new QPushButton(page_4);
        btnSalvaReserva->setObjectName(QString::fromUtf8("btnSalvaReserva"));
        btnSalvaReserva->setGeometry(QRect(240, 320, 200, 41));
        gridLayoutWidget = new QWidget(page_4);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(50, 100, 571, 132));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(gridLayoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 0, 0, 1, 1);

        txtDuracao = new QLineEdit(gridLayoutWidget);
        txtDuracao->setObjectName(QString::fromUtf8("txtDuracao"));

        gridLayout->addWidget(txtDuracao, 2, 3, 1, 1);

        label_18 = new QLabel(gridLayoutWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout->addWidget(label_18, 1, 2, 1, 1);

        txtEmailCliente = new QLineEdit(gridLayoutWidget);
        txtEmailCliente->setObjectName(QString::fromUtf8("txtEmailCliente"));

        gridLayout->addWidget(txtEmailCliente, 0, 3, 1, 1);

        txtIdadeCliente = new QLineEdit(gridLayoutWidget);
        txtIdadeCliente->setObjectName(QString::fromUtf8("txtIdadeCliente"));

        gridLayout->addWidget(txtIdadeCliente, 1, 1, 1, 1);

        txtContatoCliente = new QLineEdit(gridLayoutWidget);
        txtContatoCliente->setObjectName(QString::fromUtf8("txtContatoCliente"));

        gridLayout->addWidget(txtContatoCliente, 1, 3, 1, 1);

        label_17 = new QLabel(gridLayoutWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout->addWidget(label_17, 0, 2, 1, 1);

        txtCPFCliente = new QLineEdit(gridLayoutWidget);
        txtCPFCliente->setObjectName(QString::fromUtf8("txtCPFCliente"));

        gridLayout->addWidget(txtCPFCliente, 2, 1, 1, 1);

        label_15 = new QLabel(gridLayoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout->addWidget(label_15, 1, 0, 1, 1);

        txtNomeCliente = new QLineEdit(gridLayoutWidget);
        txtNomeCliente->setObjectName(QString::fromUtf8("txtNomeCliente"));

        gridLayout->addWidget(txtNomeCliente, 0, 1, 1, 1);

        label_16 = new QLabel(gridLayoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout->addWidget(label_16, 2, 0, 1, 1);

        label_19 = new QLabel(gridLayoutWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout->addWidget(label_19, 3, 0, 1, 1);

        txtEnderecoCliente = new QLineEdit(gridLayoutWidget);
        txtEnderecoCliente->setObjectName(QString::fromUtf8("txtEnderecoCliente"));

        gridLayout->addWidget(txtEnderecoCliente, 3, 1, 1, 1);

        label_14 = new QLabel(gridLayoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout->addWidget(label_14, 3, 2, 1, 1);

        comboBoxQuartos = new QComboBox(gridLayoutWidget);
        comboBoxQuartos->setObjectName(QString::fromUtf8("comboBoxQuartos"));

        gridLayout->addWidget(comboBoxQuartos, 3, 3, 1, 1);

        label_20 = new QLabel(gridLayoutWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout->addWidget(label_20, 2, 2, 1, 1);

        txtDisp = new QLabel(page_4);
        txtDisp->setObjectName(QString::fromUtf8("txtDisp"));
        txtDisp->setGeometry(QRect(250, 270, 181, 21));
        label_13 = new QLabel(page_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setEnabled(true);
        label_13->setGeometry(QRect(1, 310, 41, 21));
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        btnSalvarSenha = new QPushButton(page_5);
        btnSalvarSenha->setObjectName(QString::fromUtf8("btnSalvarSenha"));
        btnSalvarSenha->setGeometry(QRect(235, 280, 200, 41));
        txtSenhaGerencia = new QLineEdit(page_5);
        txtSenhaGerencia->setObjectName(QString::fromUtf8("txtSenhaGerencia"));
        txtSenhaGerencia->setGeometry(QRect(180, 100, 311, 28));
        label_2 = new QLabel(page_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 70, 121, 20));
        label_5 = new QLabel(page_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(180, 160, 181, 20));
        txtConfirmaSenha = new QLineEdit(page_5);
        txtConfirmaSenha->setObjectName(QString::fromUtf8("txtConfirmaSenha"));
        txtConfirmaSenha->setGeometry(QRect(180, 190, 311, 28));
        lblVerificaSenhas = new QLabel(page_5);
        lblVerificaSenhas->setObjectName(QString::fromUtf8("lblVerificaSenhas"));
        lblVerificaSenhas->setGeometry(QRect(200, 240, 261, 20));
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        tableWidgetClientes = new QTableWidget(page_6);
        if (tableWidgetClientes->columnCount() < 3)
            tableWidgetClientes->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetClientes->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetClientes->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetClientes->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidgetClientes->setObjectName(QString::fromUtf8("tableWidgetClientes"));
        tableWidgetClientes->setGeometry(QRect(60, 40, 421, 192));
        tableWidgetClientes->setGridStyle(Qt::NoPen);
        tableWidgetClientes->setColumnCount(3);
        tableWidgetClientes->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidgetClientes->horizontalHeader()->setMinimumSectionSize(23);
        tableWidgetClientes->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidgetClientes->horizontalHeader()->setStretchLastSection(false);
        tableWidgetClientes->verticalHeader()->setStretchLastSection(false);
        stackedWidget->addWidget(page_6);
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 0, 71, 401));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btnAdd = new QPushButton(verticalLayoutWidget);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/icons/icons8-reserva-2-100.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAdd->setIcon(icon2);
        btnAdd->setIconSize(QSize(30, 30));
        btnAdd->setFlat(true);

        verticalLayout->addWidget(btnAdd);

        btnSettings = new QPushButton(verticalLayoutWidget);
        btnSettings->setObjectName(QString::fromUtf8("btnSettings"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/icons/icons8-servi\303\247os-100 (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSettings->setIcon(icon3);
        btnSettings->setIconSize(QSize(30, 30));
        btnSettings->setFlat(true);

        verticalLayout->addWidget(btnSettings);

        btnExit = new QPushButton(verticalLayoutWidget);
        btnExit->setObjectName(QString::fromUtf8("btnExit"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/icons/icons8-sair-100.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnExit->setIcon(icon4);
        btnExit->setIconSize(QSize(30, 30));
        btnExit->setFlat(true);

        verticalLayout->addWidget(btnExit);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Hotel", 0, QApplication::UnicodeUTF8));
        btnLogin->setText(QApplication::translate("MainWindow", "Login", 0, QApplication::UnicodeUTF8));
        commandLinkButton->setText(QApplication::translate("MainWindow", "N\303\243o tem cadastro? Clique aqui", 0, QApplication::UnicodeUTF8));
        imgLogin->setText(QString());
        txtErro->setText(QString());
        btnSalvarFunc->setText(QApplication::translate("MainWindow", "Salvar", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "Voltar", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "Usu\303\241rio:", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "  Senha:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "  Nome:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "          Cargo:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "      Registro:", 0, QApplication::UnicodeUTF8));
        lblVerifica->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "Nova reserva", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Configura\303\247\303\265es", 0, QApplication::UnicodeUTF8));
        txtBtnSair->setText(QApplication::translate("MainWindow", "Sair", 0, QApplication::UnicodeUTF8));
        btnClientes->setText(QString());
        label_21->setText(QApplication::translate("MainWindow", "Gerenciar todos os clientes do hotel no momento", 0, QApplication::UnicodeUTF8));
        btnSalvaReserva->setText(QApplication::translate("MainWindow", "Salvar", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "     Nome:", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindow", "                       Contato:", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "                          E-mail:", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "      Idade:", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindow", "        CPF:", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindow", "Endere\303\247o:", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "               N\302\272 do quarto:", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("MainWindow", "     Dura\303\247\303\243o da estadia:", 0, QApplication::UnicodeUTF8));
        txtDisp->setText(QString());
        label_13->setText(QApplication::translate("MainWindow", "Voltar", 0, QApplication::UnicodeUTF8));
        btnSalvarSenha->setText(QApplication::translate("MainWindow", "Salvar", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Insira uma senha:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Digite a senha novamente:", 0, QApplication::UnicodeUTF8));
        lblVerificaSenhas->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidgetClientes->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Nome", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetClientes->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Quarto", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetClientes->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Dura\303\247\303\243o", 0, QApplication::UnicodeUTF8));
        btnAdd->setText(QString());
        btnSettings->setText(QString());
        btnExit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
