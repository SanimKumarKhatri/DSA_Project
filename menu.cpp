#include "menu.h"
#include "ui_menu.h"

menu::menu(QWidget *parent, BST *h) :
    QDialog(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
    ui->label->setText("WELCOME ");
}

menu::~menu()
{
    delete ui;
}

void menu::on_addbutton_clicked()
{
    this->hide();
    nextwindow add;
    add.show();
    add.exec();
}


void menu::on_searchbutton_clicked()
{
    this->hide();
    search Search;
    Search.show();
    Search.exec();
}

