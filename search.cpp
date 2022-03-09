#include "search.h"
#include "ui_search.h"
#include <ctime>
#include <cmath>

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
    found=false;
    double time_taken;
    int temp = ui->patientnoedit->text().toInt();
    clock_t begin_time=clock();
    p=bigdata.searchBST(temp);
    clock_t end = clock();
    time_taken = double(end-begin_time)/CLOCKS_PER_SEC;
    qDebug()<<time_taken;
    if(p.patientNo!=-1)
        found=true;
    else
        ui->label_2->setText("Entry not found!!");
    ui->label_2->setText(QString::number(time_taken,'g',15)+"s");
    ui->fname->setText("Name: "+p.fname);
    ui->lname->setText(p.lname);
    ui->age->setText("Age: "+ QString::number(p.age));
    ui->gender->setText("Gender: "+p.gender);
    ui->patienttype->setText(p.patienttype);
    ui->dateofdischarge->setText("Date of discharge: "+ p.dateofDischarge);
    ui->dateofvisit->setText("Date of Visit: "+p.dateofVisit);
    ui->detail->setText("Patient Info: "+p.detail);
}


void search::on_deletebutton_clicked()
{
    bigdata.Delete(bigdata.root, p);
}


void search::on_editbutton_clicked()
{
    if(found){
        bigdata.Delete(bigdata.root, p);
        this->hide();
        Edit_data newedit(&p);
        newedit.show();
        newedit.exec();
    }
}


void search::on_backbutton_clicked()
{
    this->hide();
    menu backed;
    backed.show();
    backed.exec();
}

