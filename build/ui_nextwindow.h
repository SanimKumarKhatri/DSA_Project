/********************************************************************************
** Form generated from reading UI file 'nextwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEXTWINDOW_H
#define UI_NEXTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_nextwindow
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *nextwindow)
    {
        if (nextwindow->objectName().isEmpty())
            nextwindow->setObjectName(QString::fromUtf8("nextwindow"));
        nextwindow->resize(400, 300);
        pushButton = new QPushButton(nextwindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 120, 83, 29));

        retranslateUi(nextwindow);

        QMetaObject::connectSlotsByName(nextwindow);
    } // setupUi

    void retranslateUi(QDialog *nextwindow)
    {
        nextwindow->setWindowTitle(QCoreApplication::translate("nextwindow", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("nextwindow", "close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class nextwindow: public Ui_nextwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEXTWINDOW_H
