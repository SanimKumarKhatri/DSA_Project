#include "nextwindow.h"
#include "ui_nextwindow.h"

nextwindow::nextwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nextwindow)
{
    ui->setupUi(this);
}

nextwindow::~nextwindow()
{
    delete ui;
}

void nextwindow::on_pushButton_clicked()
{
    this->close();
}

