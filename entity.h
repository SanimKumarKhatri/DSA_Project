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

    /*//overload >> operator to fetch user struct from datastream or file
    QDataStream &operator>>(QDataStream &in, user &p){
        in >> p.username >> p.password;
        return in;
    }*/

   /* //overload << operator to insert user struct into datastream or file
    QDataStream &operator<<(QDataStream &out, const user &p){
        out << p.username << p.password;
        return out;
    }*/
