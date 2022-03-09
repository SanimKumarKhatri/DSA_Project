/********************************************************************************
** Form generated from reading UI file 'add.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_H
#define UI_ADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add
{
public:
    QVBoxLayout *verticalLayout_2;
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

    void setupUi(QWidget *add)
    {
        if (add->objectName().isEmpty())
            add->setObjectName(QString::fromUtf8("add"));
        add->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(add);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        nameLabel = new QLabel(add);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        horizontalLayout_2->addWidget(nameLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        firstNameEditBox = new QLineEdit(add);
        firstNameEditBox->setObjectName(QString::fromUtf8("firstNameEditBox"));

        horizontalLayout->addWidget(firstNameEditBox);

        lastNameeditbox = new QLineEdit(add);
        lastNameeditbox->setObjectName(QString::fromUtf8("lastNameeditbox"));

        horizontalLayout->addWidget(lastNameeditbox);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        DateofVisitBox = new QLabel(add);
        DateofVisitBox->setObjectName(QString::fromUtf8("DateofVisitBox"));
        DateofVisitBox->setFrameShape(QFrame::NoFrame);
        DateofVisitBox->setLineWidth(1);

        horizontalLayout_3->addWidget(DateofVisitBox);

        DateofVisit = new QLineEdit(add);
        DateofVisit->setObjectName(QString::fromUtf8("DateofVisit"));
        DateofVisit->setMaxLength(10);

        horizontalLayout_3->addWidget(DateofVisit);

        genderlabel = new QLabel(add);
        genderlabel->setObjectName(QString::fromUtf8("genderlabel"));

        horizontalLayout_3->addWidget(genderlabel);

        gender = new QComboBox(add);
        gender->addItem(QString());
        gender->addItem(QString());
        gender->addItem(QString());
        gender->addItem(QString());
        gender->setObjectName(QString::fromUtf8("gender"));

        horizontalLayout_3->addWidget(gender);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        agelabel = new QLabel(add);
        agelabel->setObjectName(QString::fromUtf8("agelabel"));

        horizontalLayout_4->addWidget(agelabel);

        Ageedit = new QLineEdit(add);
        Ageedit->setObjectName(QString::fromUtf8("Ageedit"));
        Ageedit->setMaxLength(3);

        horizontalLayout_4->addWidget(Ageedit);

        patientType = new QComboBox(add);
        patientType->addItem(QString());
        patientType->addItem(QString());
        patientType->addItem(QString());
        patientType->setObjectName(QString::fromUtf8("patientType"));

        horizontalLayout_4->addWidget(patientType);


        verticalLayout->addLayout(horizontalLayout_4);

        detaillabel = new QLabel(add);
        detaillabel->setObjectName(QString::fromUtf8("detaillabel"));

        verticalLayout->addWidget(detaillabel);

        detail = new QLineEdit(add);
        detail->setObjectName(QString::fromUtf8("detail"));

        verticalLayout->addWidget(detail);

        pushButton = new QPushButton(add);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(add);

        QMetaObject::connectSlotsByName(add);
    } // setupUi

    void retranslateUi(QWidget *add)
    {
        add->setWindowTitle(QCoreApplication::translate("add", "Form", nullptr));
        nameLabel->setText(QCoreApplication::translate("add", "Name", nullptr));
        firstNameEditBox->setPlaceholderText(QCoreApplication::translate("add", "First name", nullptr));
        lastNameeditbox->setPlaceholderText(QCoreApplication::translate("add", "Last name", nullptr));
        DateofVisitBox->setText(QCoreApplication::translate("add", "Date of Visit", nullptr));
        DateofVisit->setInputMask(QString());
        DateofVisit->setText(QString());
        DateofVisit->setPlaceholderText(QCoreApplication::translate("add", "yyyy/mm/dd", nullptr));
        genderlabel->setText(QCoreApplication::translate("add", "Gender", nullptr));
        gender->setItemText(0, QCoreApplication::translate("add", "Gender", nullptr));
        gender->setItemText(1, QCoreApplication::translate("add", "Male", nullptr));
        gender->setItemText(2, QCoreApplication::translate("add", "Female", nullptr));
        gender->setItemText(3, QCoreApplication::translate("add", "Others", nullptr));

        agelabel->setText(QCoreApplication::translate("add", "Age", nullptr));
        Ageedit->setInputMask(QString());
        Ageedit->setPlaceholderText(QCoreApplication::translate("add", "age", nullptr));
        patientType->setItemText(0, QCoreApplication::translate("add", "Patient Type", nullptr));
        patientType->setItemText(1, QCoreApplication::translate("add", "Inpatient", nullptr));
        patientType->setItemText(2, QCoreApplication::translate("add", "Outpatient", nullptr));

        detaillabel->setText(QCoreApplication::translate("add", "Brief detail:", nullptr));
        pushButton->setText(QCoreApplication::translate("add", "ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add: public Ui_add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_H
