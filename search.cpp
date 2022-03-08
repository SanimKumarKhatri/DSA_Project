#include "search.h"
#include "ui_search.h"
#include "entity.h"

search::search(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::search)
{
    ui->setupUi(this);
    //ui->patientnoedit->setValidator(new QIntValidator(0, 1000, this))
}

search::~search()
{
    delete ui;
}

void search::on_searchbutton_clicked()
{
    bool matched=false;
    int temp = ui->patientnoedit->text().toInt();
    Patient *p = new Patient;
    QFile fout("patient.txt");
    if(!fout.exists()){
        qDebug()<<"File not found";
    }
    if(fout.open(QIODevice::ReadOnly)){
        QDataStream in(&fout);
        while(!matched){
            in>>p->patientNo>>p->fname>>p->lname>>p->gender>>p->age>>p->patienttype>>p->dateofVisit>>p->dateofDischarge
              >>p->detail;
            if(temp==p->patientNo){
                matched=true;
                qDebug()<<p->patientNo<<p->fname<<p->age<<p->lname<<p->patienttype<<p->dateofVisit<<p->gender;
            }
        }
    }
    fout.close();
}

