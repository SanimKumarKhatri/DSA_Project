#include "mainwindow.h"
#include<iostream>
#include <fstream>
#include "login.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    int h;
    qDebug()<<"Started!";
    std::cin>>h;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
