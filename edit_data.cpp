#include "edit_data.h"
#include "ui_edit_data.h"

Edit_data::Edit_data(Patient *p,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Edit_data)
{
    ui->setupUi(this);
    num=p->patientNo;
    ui->Ageedit->setText(QString::number(p->age));
    ui->DateofVisit->setText((p->dateofVisit));
    ui->detail->setText(p->detail);
    ui->gender->setCurrentText(p->gender);
    ui->firstNameEditBox->setText(p->fname);
    ui->lastNameeditbox->setText(p->lname);
    ui->patientType->setCurrentText(p->patienttype);
    ui->dateofdischargebox->setText(p->dateofDischarge);
}

Edit_data::~Edit_data()
{
    delete ui;
}

void Edit_data::on_pushButton_clicked()
{
    Patient *p = new Patient;
    p->patientNo=num;
    p->fname=ui->firstNameEditBox->text();
    p->lname=ui->lastNameeditbox->text();
    p->gender=ui->gender->currentText();
    p->dateofVisit=ui->DateofVisit->text();
    p->patienttype=ui->patientType->currentText();
    p->detail=ui->detail->text();
    p->age=ui->Ageedit->text().toInt();
    p->dateofDischarge=ui->dateofdischargebox->text();
    bigdata.insert(bigdata.root, *p);
    this->hide();
    menu backed;
    backed.show();
    backed.exec();
}
