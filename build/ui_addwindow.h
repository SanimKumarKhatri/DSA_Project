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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_nextwindow
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *nameLabel;
    QHBoxLayout *horizontalLayout;
    QLineEdit *firstNameEditBox;
    QLineEdit *lastNameeditbox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *DateofVisitBox;
    QLineEdit *DateofVisit;
    QLabel *genderlabel;
    QComboBox *gender;
    QHBoxLayout *horizontalLayout_4;
    QLabel *agelabel;
    QLineEdit *Ageedit;
    QComboBox *patientType;
    QLabel *detaillabel;
    QLineEdit *detail;
    QPushButton *pushButton;

    void setupUi(QDialog *nextwindow)
    {
        if (nextwindow->objectName().isEmpty())
            nextwindow->setObjectName(QString::fromUtf8("nextwindow"));
        nextwindow->resize(386, 318);
        widget = new QWidget(nextwindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 38, 315, 189));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        nameLabel = new QLabel(widget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        horizontalLayout_2->addWidget(nameLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        firstNameEditBox = new QLineEdit(widget);
        firstNameEditBox->setObjectName(QString::fromUtf8("firstNameEditBox"));

        horizontalLayout->addWidget(firstNameEditBox);

        lastNameeditbox = new QLineEdit(widget);
        lastNameeditbox->setObjectName(QString::fromUtf8("lastNameeditbox"));

        horizontalLayout->addWidget(lastNameeditbox);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        DateofVisitBox = new QLabel(widget);
        DateofVisitBox->setObjectName(QString::fromUtf8("DateofVisitBox"));
        DateofVisitBox->setFrameShape(QFrame::NoFrame);
        DateofVisitBox->setLineWidth(1);

        horizontalLayout_3->addWidget(DateofVisitBox);

        DateofVisit = new QLineEdit(widget);
        DateofVisit->setObjectName(QString::fromUtf8("DateofVisit"));
        DateofVisit->setMaxLength(10);

        horizontalLayout_3->addWidget(DateofVisit);

        genderlabel = new QLabel(widget);
        genderlabel->setObjectName(QString::fromUtf8("genderlabel"));

        horizontalLayout_3->addWidget(genderlabel);

        gender = new QComboBox(widget);
        gender->addItem(QString());
        gender->addItem(QString());
        gender->addItem(QString());
        gender->addItem(QString());
        gender->setObjectName(QString::fromUtf8("gender"));

        horizontalLayout_3->addWidget(gender);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        agelabel = new QLabel(widget);
        agelabel->setObjectName(QString::fromUtf8("agelabel"));

        horizontalLayout_4->addWidget(agelabel);

        Ageedit = new QLineEdit(widget);
        Ageedit->setObjectName(QString::fromUtf8("Ageedit"));
        Ageedit->setMaxLength(3);

        horizontalLayout_4->addWidget(Ageedit);

        patientType = new QComboBox(widget);
        patientType->addItem(QString());
        patientType->addItem(QString());
        patientType->addItem(QString());
        patientType->setObjectName(QString::fromUtf8("patientType"));

        horizontalLayout_4->addWidget(patientType);


        verticalLayout->addLayout(horizontalLayout_4);

        detaillabel = new QLabel(widget);
        detaillabel->setObjectName(QString::fromUtf8("detaillabel"));

        verticalLayout->addWidget(detaillabel);

        detail = new QLineEdit(widget);
        detail->setObjectName(QString::fromUtf8("detail"));

        verticalLayout->addWidget(detail);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(nextwindow);

        QMetaObject::connectSlotsByName(nextwindow);
    } // setupUi

    void retranslateUi(QDialog *nextwindow)
    {
        nextwindow->setWindowTitle(QCoreApplication::translate("nextwindow", "The Big Sick", nullptr));
        nameLabel->setText(QCoreApplication::translate("nextwindow", "Name", nullptr));
        firstNameEditBox->setPlaceholderText(QCoreApplication::translate("nextwindow", "First name", nullptr));
        lastNameeditbox->setPlaceholderText(QCoreApplication::translate("nextwindow", "Last name", nullptr));
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
