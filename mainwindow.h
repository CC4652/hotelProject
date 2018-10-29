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

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
