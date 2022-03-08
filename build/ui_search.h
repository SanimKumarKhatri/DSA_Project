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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_search
{
public:
    QLabel *label;
    QPushButton *searchbutton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *patientnosearch;
    QLineEdit *patientnoedit;

    void setupUi(QDialog *search)
    {
        if (search->objectName().isEmpty())
            search->setObjectName(QString::fromUtf8("search"));
        search->resize(400, 300);
        label = new QLabel(search);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 141, 41));
        searchbutton = new QPushButton(search);
        searchbutton->setObjectName(QString::fromUtf8("searchbutton"));
        searchbutton->setGeometry(QRect(240, 170, 83, 29));
        widget = new QWidget(search);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(90, 120, 173, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        patientnosearch = new QLabel(widget);
        patientnosearch->setObjectName(QString::fromUtf8("patientnosearch"));

        horizontalLayout->addWidget(patientnosearch);

        patientnoedit = new QLineEdit(widget);
        patientnoedit->setObjectName(QString::fromUtf8("patientnoedit"));

        horizontalLayout->addWidget(patientnoedit);


        retranslateUi(search);

        QMetaObject::connectSlotsByName(search);
    } // setupUi

    void retranslateUi(QDialog *search)
    {
        search->setWindowTitle(QCoreApplication::translate("search", "The Big Sick", nullptr));
        label->setText(QCoreApplication::translate("search", "Search for data", nullptr));
        searchbutton->setText(QCoreApplication::translate("search", "Search", nullptr));
        patientnosearch->setText(QCoreApplication::translate("search", "Patient No", nullptr));
        patientnoedit->setInputMask(QString());
        patientnoedit->setPlaceholderText(QCoreApplication::translate("search", "Patient ID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class search: public Ui_search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
