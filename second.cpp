#include "second.h"
#include "ui_second.h"

second::second(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::second)
{
    ui->setupUi(this);
}

second::~second()
{
    delete ui;
}
