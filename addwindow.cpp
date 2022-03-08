#include "addwindow.h"
#include "ui_addwindow.h"
#include "entity.h"

//temp
#include <QFile>

nextwindow::nextwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nextwindow)
{
    ui->setupUi(this);
    ui->Ageedit->setValidator(new QIntValidator(0,200, this));
}

nextwindow::~nextwindow()
{
    delete ui;
}

void nextwindow::on_pushButton_clicked()
{
    Patient *p = new Patient;
    p->patientNo=1;
    p->fname=ui->firstNameEditBox->text();
    p->lname=ui->lastNameeditbox->text();
    p->gender=ui->gender->currentText();
    p->dateofVisit=ui->DateofVisit->text();
    p->patienttype=ui->patientType->currentText();
    p->detail=ui->detail->text();
    p->age=ui->Ageedit->text().toInt();
    p->dateofDischarge="0000";
    QFile fout("patient.txt");
    if(!fout.exists()){
        qDebug()<<"File not found";
    }
    if(fout.open(QIODevice::Append)){
        QDataStream out(&fout);
            out<<p->patientNo<<p->fname<<p->lname<<p->gender<<p->age<<p->patienttype<<p->dateofVisit<<p->dateofDischarge
              <<p->detail;
            qDebug()<<p->patientNo<<" written in file";
    }
    fout.close();
}
