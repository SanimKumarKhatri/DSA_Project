/********************************************************************************
** Form generated from reading UI file 'search.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_H
#define UI_SEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_search
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *patientnosearch;
    QLineEdit *patientnoedit;
    QPushButton *searchbutton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *fname;
    QLabel *lname;
    QLabel *age;
    QLabel *gender;
    QLabel *patienttype;
    QLabel *detail;
    QLabel *dateofdischarge;
    QLabel *dateofvisit;

    void setupUi(QDialog *search)
    {
        if (search->objectName().isEmpty())
            search->setObjectName(QString::fromUtf8("search"));
        search->resize(400, 336);
        verticalLayout = new QVBoxLayout(search);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(search);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        patientnosearch = new QLabel(search);
        patientnosearch->setObjectName(QString::fromUtf8("patientnosearch"));

        horizontalLayout->addWidget(patientnosearch);

        patientnoedit = new QLineEdit(search);
        patientnoedit->setObjectName(QString::fromUtf8("patientnoedit"));

        horizontalLayout->addWidget(patientnoedit);


        horizontalLayout_2->addLayout(horizontalLayout);

        searchbutton = new QPushButton(search);
        searchbutton->setObjectName(QString::fromUtf8("searchbutton"));

        horizontalLayout_2->addWidget(searchbutton);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        fname = new QLabel(search);
        fname->setObjectName(QString::fromUtf8("fname"));

        horizontalLayout_3->addWidget(fname);

        lname = new QLabel(search);
        lname->setObjectName(QString::fromUtf8("lname"));

        horizontalLayout_3->addWidget(lname);


        verticalLayout->addLayout(horizontalLayout_3);

        age = new QLabel(search);
        age->setObjectName(QString::fromUtf8("age"));

        verticalLayout->addWidget(age);

        gender = new QLabel(search);
        gender->setObjectName(QString::fromUtf8("gender"));

        verticalLayout->addWidget(gender);

        patienttype = new QLabel(search);
        patienttype->setObjectName(QString::fromUtf8("patienttype"));

        verticalLayout->addWidget(patienttype);

        detail = new QLabel(search);
        detail->setObjectName(QString::fromUtf8("detail"));

        verticalLayout->addWidget(detail);

        dateofdischarge = new QLabel(search);
        dateofdischarge->setObjectName(QString::fromUtf8("dateofdischarge"));

        verticalLayout->addWidget(dateofdischarge);

        dateofvisit = new QLabel(search);
        dateofvisit->setObjectName(QString::fromUtf8("dateofvisit"));

        verticalLayout->addWidget(dateofvisit);


        retranslateUi(search);

        QMetaObject::connectSlotsByName(search);
    } // setupUi

    void retranslateUi(QDialog *search)
    {
        search->setWindowTitle(QCoreApplication::translate("search", "The Big Sick", nullptr));
        label->setText(QCoreApplication::translate("search", "Search for data", nullptr));
        patientnosearch->setText(QCoreApplication::translate("search", "Patient No", nullptr));
        patientnoedit->setInputMask(QString());
        patientnoedit->setPlaceholderText(QCoreApplication::translate("search", "Patient ID", nullptr));
        searchbutton->setText(QCoreApplication::translate("search", "Search", nullptr));
        fname->setText(QString());
        lname->setText(QString());
        age->setText(QString());
        gender->setText(QString());
        patienttype->setText(QString());
        detail->setText(QString());
        dateofdischarge->setText(QString());
        dateofvisit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class search: public Ui_search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
