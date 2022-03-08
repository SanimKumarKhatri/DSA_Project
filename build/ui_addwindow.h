/********************************************************************************
** Form generated from reading UI file 'addwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDWINDOW_H
#define UI_ADDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_nextwindow
{
public:
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *nameLabel;
    QLineEdit *NameEditBox;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *DateofVisitBox;
    QLineEdit *DateofVisit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *genderlabel;
    QComboBox *gender;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *agelabel;
    QLineEdit *Ageedit;
    QComboBox *patientType;
    QVBoxLayout *verticalLayout_4;
    QLabel *detaillabel;
    QTextBrowser *detailedit;
    QPushButton *pushButton;

    void setupUi(QDialog *nextwindow)
    {
        if (nextwindow->objectName().isEmpty())
            nextwindow->setObjectName(QString::fromUtf8("nextwindow"));
        nextwindow->resize(395, 304);
        verticalLayout_5 = new QVBoxLayout(nextwindow);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        nameLabel = new QLabel(nextwindow);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        horizontalLayout->addWidget(nameLabel);

        NameEditBox = new QLineEdit(nextwindow);
        NameEditBox->setObjectName(QString::fromUtf8("NameEditBox"));

        horizontalLayout->addWidget(NameEditBox);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        DateofVisitBox = new QLabel(nextwindow);
        DateofVisitBox->setObjectName(QString::fromUtf8("DateofVisitBox"));
        DateofVisitBox->setFrameShape(QFrame::NoFrame);
        DateofVisitBox->setLineWidth(1);

        horizontalLayout_4->addWidget(DateofVisitBox);

        DateofVisit = new QLineEdit(nextwindow);
        DateofVisit->setObjectName(QString::fromUtf8("DateofVisit"));
        DateofVisit->setMaxLength(10);

        horizontalLayout_4->addWidget(DateofVisit);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        genderlabel = new QLabel(nextwindow);
        genderlabel->setObjectName(QString::fromUtf8("genderlabel"));

        horizontalLayout_3->addWidget(genderlabel);

        gender = new QComboBox(nextwindow);
        gender->addItem(QString());
        gender->addItem(QString());
        gender->addItem(QString());
        gender->addItem(QString());
        gender->setObjectName(QString::fromUtf8("gender"));

        horizontalLayout_3->addWidget(gender);


        horizontalLayout_5->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(horizontalLayout_5);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        agelabel = new QLabel(nextwindow);
        agelabel->setObjectName(QString::fromUtf8("agelabel"));

        horizontalLayout_6->addWidget(agelabel);

        Ageedit = new QLineEdit(nextwindow);
        Ageedit->setObjectName(QString::fromUtf8("Ageedit"));
        Ageedit->setMaxLength(3);

        horizontalLayout_6->addWidget(Ageedit);


        horizontalLayout_7->addLayout(horizontalLayout_6);

        patientType = new QComboBox(nextwindow);
        patientType->addItem(QString());
        patientType->addItem(QString());
        patientType->addItem(QString());
        patientType->setObjectName(QString::fromUtf8("patientType"));

        horizontalLayout_7->addWidget(patientType);


        verticalLayout_3->addLayout(horizontalLayout_7);


        verticalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        detaillabel = new QLabel(nextwindow);
        detaillabel->setObjectName(QString::fromUtf8("detaillabel"));

        verticalLayout_4->addWidget(detaillabel);

        detailedit = new QTextBrowser(nextwindow);
        detailedit->setObjectName(QString::fromUtf8("detailedit"));

        verticalLayout_4->addWidget(detailedit);


        verticalLayout_5->addLayout(verticalLayout_4);

        pushButton = new QPushButton(nextwindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_5->addWidget(pushButton);


        retranslateUi(nextwindow);

        QMetaObject::connectSlotsByName(nextwindow);
    } // setupUi

    void retranslateUi(QDialog *nextwindow)
    {
        nextwindow->setWindowTitle(QCoreApplication::translate("nextwindow", "The Big Sick", nullptr));
        nameLabel->setText(QCoreApplication::translate("nextwindow", "Name", nullptr));
        DateofVisitBox->setText(QCoreApplication::translate("nextwindow", "Date of Visit", nullptr));
        DateofVisit->setInputMask(QString());
        DateofVisit->setText(QString());
        DateofVisit->setPlaceholderText(QCoreApplication::translate("nextwindow", "yyyy/mm/dd", nullptr));
        genderlabel->setText(QCoreApplication::translate("nextwindow", "Gender", nullptr));
        gender->setItemText(0, QCoreApplication::translate("nextwindow", "Gender", nullptr));
        gender->setItemText(1, QCoreApplication::translate("nextwindow", "Male", nullptr));
        gender->setItemText(2, QCoreApplication::translate("nextwindow", "Female", nullptr));
        gender->setItemText(3, QCoreApplication::translate("nextwindow", "Others", nullptr));

        agelabel->setText(QCoreApplication::translate("nextwindow", "Age", nullptr));
        Ageedit->setInputMask(QString());
        Ageedit->setPlaceholderText(QCoreApplication::translate("nextwindow", "age", nullptr));
        patientType->setItemText(0, QCoreApplication::translate("nextwindow", "Patient Type", nullptr));
        patientType->setItemText(1, QCoreApplication::translate("nextwindow", "Inpatient", nullptr));
        patientType->setItemText(2, QCoreApplication::translate("nextwindow", "Outpatient", nullptr));

        detaillabel->setText(QCoreApplication::translate("nextwindow", "Brief detail:", nullptr));
        pushButton->setText(QCoreApplication::translate("nextwindow", "ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class nextwindow: public Ui_nextwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDWINDOW_H
