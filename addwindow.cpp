#include "addwindow.h"
#include "ui_addwindow.h"

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
    //p->patientNo=++bigdata.MAXID;
    p->fname=ui->firstNameEditBox->text();
    p->lname=ui->lastNameeditbox->text();
    p->gender=ui->gender->currentText();
    p->dateofVisit=ui->DateofVisit->text();
    p->patienttype=ui->patientType->currentText();
    p->detail=ui->detail->text();
    p->age=ui->Ageedit->text().toInt();
    //bigdata.insert(bigdata.root, *p);
}
