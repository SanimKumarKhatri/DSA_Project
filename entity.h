#pragma once
#include <QDebug>
#include <QString>
#include <QDataStream>
#include <QFile>

    struct Patient{
        int patientNo;
        int age;
        QString gender;
        QString fname;
        QString lname;
        QString patienttype;
        QString dateofVisit;
        QString dateofDischarge;
        QString detail;
    };

    struct user{
            QString username;
            QString password;
    };
