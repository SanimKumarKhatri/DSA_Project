/********************************************************************************
** Form generated from reading UI file 'edit_data.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_DATA_H
#define UI_EDIT_DATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Edit_data
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *nameLabel;
    QHBoxLayout *horizontalLayout;
    QLineEdit *firstNameEditBox;
    QLineEdit *lastNameeditbox;
    QLabel *genderlabel;
    QComboBox *gender;
    QHBoxLayout *horizontalLayout_3;
    QLabel *DateofVisitBox;
    QLineEdit *DateofVisit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *dateofdischargge;
    QLineEdit *dateofdischargebox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *agelabel;
    QLineEdit *Ageedit;
    QComboBox *patientType;
    QLabel *detaillabel;
    QLineEdit *detail;
    QPushButton *pushButton;

    void setupUi(QDialog *Edit_data)
    {
        if (Edit_data->objectName().isEmpty())
            Edit_data->setObjectName(QString::fromUtf8("Edit_data"));
        Edit_data->resize(438, 419);
        verticalLayout_2 = new QVBoxLayout(Edit_data);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        nameLabel = new QLabel(Edit_data);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        horizontalLayout_2->addWidget(nameLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        firstNameEditBox = new QLineEdit(Edit_data);
        firstNameEditBox->setObjectName(QString::fromUtf8("firstNameEditBox"));

        horizontalLayout->addWidget(firstNameEditBox);

        lastNameeditbox = new QLineEdit(Edit_data);
        lastNameeditbox->setObjectName(QString::fromUtf8("lastNameeditbox"));

        horizontalLayout->addWidget(lastNameeditbox);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_2);

        genderlabel = new QLabel(Edit_data);
        genderlabel->setObjectName(QString::fromUtf8("genderlabel"));

        verticalLayout->addWidget(genderlabel);

        gender = new QComboBox(Edit_data);
        gender->addItem(QString());
        gender->addItem(QString());
        gender->addItem(QString());
        gender->addItem(QString());
        gender->setObjectName(QString::fromUtf8("gender"));

        verticalLayout->addWidget(gender);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        DateofVisitBox = new QLabel(Edit_data);
        DateofVisitBox->setObjectName(QString::fromUtf8("DateofVisitBox"));
        DateofVisitBox->setFrameShape(QFrame::NoFrame);
        DateofVisitBox->setLineWidth(1);

        horizontalLayout_3->addWidget(DateofVisitBox);

        DateofVisit = new QLineEdit(Edit_data);
        DateofVisit->setObjectName(QString::fromUtf8("DateofVisit"));
        DateofVisit->setMaxLength(10);

        horizontalLayout_3->addWidget(DateofVisit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        dateofdischargge = new QLabel(Edit_data);
        dateofdischargge->setObjectName(QString::fromUtf8("dateofdischargge"));

        horizontalLayout_5->addWidget(dateofdischargge);

        dateofdischargebox = new QLineEdit(Edit_data);
        dateofdischargebox->setObjectName(QString::fromUtf8("dateofdischargebox"));

        horizontalLayout_5->addWidget(dateofdischargebox);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        agelabel = new QLabel(Edit_data);
        agelabel->setObjectName(QString::fromUtf8("agelabel"));

        horizontalLayout_4->addWidget(agelabel);

        Ageedit = new QLineEdit(Edit_data);
        Ageedit->setObjectName(QString::fromUtf8("Ageedit"));
        Ageedit->setMaxLength(3);

        horizontalLayout_4->addWidget(Ageedit);

        patientType = new QComboBox(Edit_data);
        patientType->addItem(QString());
        patientType->addItem(QString());
        patientType->addItem(QString());
        patientType->setObjectName(QString::fromUtf8("patientType"));

        horizontalLayout_4->addWidget(patientType);


        verticalLayout->addLayout(horizontalLayout_4);

        detaillabel = new QLabel(Edit_data);
        detaillabel->setObjectName(QString::fromUtf8("detaillabel"));

        verticalLayout->addWidget(detaillabel);

        detail = new QLineEdit(Edit_data);
        detail->setObjectName(QString::fromUtf8("detail"));

        verticalLayout->addWidget(detail);

        pushButton = new QPushButton(Edit_data);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Edit_data);

        QMetaObject::connectSlotsByName(Edit_data);
    } // setupUi

    void retranslateUi(QDialog *Edit_data)
    {
        Edit_data->setWindowTitle(QCoreApplication::translate("Edit_data", "Dialog", nullptr));
        nameLabel->setText(QCoreApplication::translate("Edit_data", "Name", nullptr));
        firstNameEditBox->setPlaceholderText(QCoreApplication::translate("Edit_data", "First name", nullptr));
        lastNameeditbox->setPlaceholderText(QCoreApplication::translate("Edit_data", "Last name", nullptr));
        genderlabel->setText(QCoreApplication::translate("Edit_data", "Gender", nullptr));
        gender->setItemText(0, QCoreApplication::translate("Edit_data", "Gender", nullptr));
        gender->setItemText(1, QCoreApplication::translate("Edit_data", "Male", nullptr));
        gender->setItemText(2, QCoreApplication::translate("Edit_data", "Female", nullptr));
        gender->setItemText(3, QCoreApplication::translate("Edit_data", "Others", nullptr));

        DateofVisitBox->setText(QCoreApplication::translate("Edit_data", "Date of Visit", nullptr));
        DateofVisit->setInputMask(QString());
        DateofVisit->setText(QString());
        DateofVisit->setPlaceholderText(QCoreApplication::translate("Edit_data", "yyyy/mm/dd", nullptr));
        dateofdischargge->setText(QCoreApplication::translate("Edit_data", "Date of Discharge", nullptr));
        dateofdischargebox->setPlaceholderText(QCoreApplication::translate("Edit_data", "yyyy/mm/dd", nullptr));
        agelabel->setText(QCoreApplication::translate("Edit_data", "Age", nullptr));
        Ageedit->setInputMask(QString());
        Ageedit->setPlaceholderText(QCoreApplication::translate("Edit_data", "age", nullptr));
        patientType->setItemText(0, QCoreApplication::translate("Edit_data", "Patient Type", nullptr));
        patientType->setItemText(1, QCoreApplication::translate("Edit_data", "Inpatient", nullptr));
        patientType->setItemText(2, QCoreApplication::translate("Edit_data", "Outpatient", nullptr));

        detaillabel->setText(QCoreApplication::translate("Edit_data", "Brief detail:", nullptr));
        pushButton->setText(QCoreApplication::translate("Edit_data", "ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Edit_data: public Ui_Edit_data {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_DATA_H
