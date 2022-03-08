#include "search.h"
#include "ui_search.h"

search::search(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::search)
{
    ui->setupUi(this);
}

search::~search()
{
    delete ui;
}

void search::on_searchbutton_clicked()
{
    int temp = ui->patientnoedit->text().toInt();
    Patient p=bigdata.searchBST(temp);
    ui->fname->setText("Name: "+p.fname);
    ui->lname->setText(p.lname);
    ui->age->setText("Age: "+ QString::number(p.age));
    ui->gender->setText("Gender: "+p.gender);
    ui->patienttype->setText(p.patienttype);
    ui->dateofdischarge->setText("Date of discharge: "+ p.dateofDischarge);
    ui->dateofvisit->setText("Date of Visit: "+p.dateofVisit);
    ui->detail->setText("Patient Info: "+p.detail);
}

