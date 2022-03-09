#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_loginbutton_clicked()
{
    login l1;
    //l1.settext();
    l1.logindetail(ui->usernamebox->text(),ui->passwordbox->text());
    l1.getdata();
    if(l1.loginstatus()){
        ui->loginstatusbox->setText("Login Successful");
        this->hide();
        menu nw;
        nw.setModal(true);
        nw.exec();
    }
    else
        ui->loginstatusbox->setText("Invalid username or password");
}

