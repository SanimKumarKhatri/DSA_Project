/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *usernamelabel;
    QLineEdit *usernamebox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *passwordlabel;
    QLineEdit *passwordbox;
    QPushButton *loginbutton;
    QLabel *loginstatusbox;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(484, 179);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        usernamelabel = new QLabel(centralwidget);
        usernamelabel->setObjectName(QString::fromUtf8("usernamelabel"));

        horizontalLayout->addWidget(usernamelabel);

        usernamebox = new QLineEdit(centralwidget);
        usernamebox->setObjectName(QString::fromUtf8("usernamebox"));

        horizontalLayout->addWidget(usernamebox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        passwordlabel = new QLabel(centralwidget);
        passwordlabel->setObjectName(QString::fromUtf8("passwordlabel"));

        horizontalLayout_2->addWidget(passwordlabel);

        passwordbox = new QLineEdit(centralwidget);
        passwordbox->setObjectName(QString::fromUtf8("passwordbox"));
        passwordbox->setEnabled(true);
        passwordbox->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(passwordbox);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        loginbutton = new QPushButton(centralwidget);
        loginbutton->setObjectName(QString::fromUtf8("loginbutton"));

        verticalLayout_2->addWidget(loginbutton);


        verticalLayout_3->addLayout(verticalLayout_2);

        loginstatusbox = new QLabel(centralwidget);
        loginstatusbox->setObjectName(QString::fromUtf8("loginstatusbox"));

        verticalLayout_3->addWidget(loginstatusbox);


        verticalLayout_4->addLayout(verticalLayout_3);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "The Big Sick", nullptr));
        usernamelabel->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        passwordlabel->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        passwordbox->setText(QString());
        loginbutton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        loginstatusbox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
