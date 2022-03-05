#pragma once
#include <QDebug>
#include <QString>
#include <QDataStream>

    struct Patient{
        int patientNo;
        int age;
        char gender;
        QString name;
        int patienttype;
        QString dateofVisit;
        QString dateofDischarge;
        QString detail;
    };

    //overload >> operator to fetch user struct from datastream or file
    QDataStream &operator>>(QDataStream &in, Patient &p){
        QString temp;
        in>>p.patientNo>>p.age>>p.gender>>p.name>>p.patienttype>>p.dateofVisit>>p.dateofDischarge;
        do
        {
            in>>temp;
            p.detail+=temp;

        }while(temp!='#');
        return in;
    }

    //overload << operator to insert user struct into datastream or file
    QDataStream &operator<<(QDataStream &out, const Patient &p){
        out<<p.patientNo<<p.age<<p.gender<<p.name<<p.patienttype<<p.dateofVisit<<p.dateofDischarge<<p.detail<<'#';
        return out;
    }

    struct user{
    //public:
            QString username;
            QString password;
            //initialize user
        /*user();
        user(QString n, QString p);
        QString getUsername();
        QString getPassword();
        void getdata();
        void putdata();*/
    };
    //overload >> operator to fetch user struct from datastream or file
    QDataStream &operator>>(QDataStream &in, user &p){
        in >> p.username >> p.password;
        return in;
    }

    //overload << operator to insert user struct into datastream or file
    QDataStream &operator<<(QDataStream &out, const user &p){
        out << p.username << p.password;
        return out;
    }
