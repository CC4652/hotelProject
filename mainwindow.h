#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnLogin_clicked();

    void on_btnExit_clicked();

    void on_commandLinkButton_clicked();

    void on_btnAdd_clicked();

    void on_btnSalvarFunc_clicked();

    void on_btnSalvarSenha_clicked();

    void on_btnSalvaReserva_clicked();


    void on_btnClientes_clicked();

    void on_btnCheckout_clicked();
    
    void on_btnSettings_clicked();

    void on_btnCheckout_3_clicked();

    void on_btnCheckout_2_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
