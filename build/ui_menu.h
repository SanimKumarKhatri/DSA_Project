/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *searchbutton;
    QPushButton *addbutton;
    QLabel *reading_sortingbox;

    void setupUi(QDialog *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName(QString::fromUtf8("menu"));
        menu->resize(566, 411);
        verticalLayout_3 = new QVBoxLayout(menu);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(menu);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        verticalLayout_3->addWidget(label);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        searchbutton = new QPushButton(menu);
        searchbutton->setObjectName(QString::fromUtf8("searchbutton"));

        verticalLayout->addWidget(searchbutton);

        addbutton = new QPushButton(menu);
        addbutton->setObjectName(QString::fromUtf8("addbutton"));

        verticalLayout->addWidget(addbutton);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        reading_sortingbox = new QLabel(menu);
        reading_sortingbox->setObjectName(QString::fromUtf8("reading_sortingbox"));

        verticalLayout_3->addWidget(reading_sortingbox);


        retranslateUi(menu);

        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QDialog *menu)
    {
        menu->setWindowTitle(QCoreApplication::translate("menu", "The Big Sick", nullptr));
        label->setText(QCoreApplication::translate("menu", "Welcome", nullptr));
        searchbutton->setText(QCoreApplication::translate("menu", "Search", nullptr));
        addbutton->setText(QCoreApplication::translate("menu", "Insert new patient data", nullptr));
        reading_sortingbox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
