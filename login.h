#ifndef LOGIN_H
#define LOGIN_H

#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>
#include <QString>
#include "mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QDataStream>
#include <QDebug>

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

class login{
private:
        //std::fstream file;
        user u;
        bool matched;
public:
        login();
        void logindetail(QString a, QString b);
        void getdata();
        bool loginstatus();
        ~login();
        //temp
        //void settext();
};

#endif // LOGIN_H
