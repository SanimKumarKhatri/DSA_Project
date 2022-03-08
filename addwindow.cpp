#include "addwindow.h"
#include "ui_nextwindow.h"
#include "entity.h"

//temp
#include <QFile>

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
   /* Patient p;
    p.patientNo=1;
    p.age=ui->Ageedit->text().toInt();
    QFile fout("patient.txt");
    if(fout.open(QIODevice::WriteOnly)){
        QDataStream out(&fout);
        for(int i=0; i<4; i++){
            out<<data[i];
            qDebug()<<data[i].username<<" written in file";
        }
    }*/
}
