#include "login.h"

login::login(){
    this->matched=false;
}

void login::logindetail(QString a, QString b){
    qDebug() <<"Received Username: "<< a;
    qDebug() <<"Received Password: "<< b;
    u.username = a;
    u.password = b;
}

/*void login::settext(){
    user data[4];
data[0]={"admin", "admin"};
data[1]={"sannyxd","076bei037"};
data[2]={"sndz","076bei036"};
data[3]={"sushi","076bei045"};
    QFile fout("login.txt");
    if(fout.open(QIODevice::WriteOnly)){
        QDataStream out(&fout);
        for(int i=0; i<4; i++){
            out<<data[i];
            qDebug()<<data[i].username<<" written in file";
        }
    }
    fout.close();
}*/

void login::getdata(){
    user temp;
    QFile fin("login.txt");
    if(fin.open(QIODevice::ReadOnly)){
        while(!fin.atEnd()){
        QDataStream in(&fin);
        in>>temp.username>>temp.password;
        qDebug()<<temp.username<<" "<<temp.password;
        if(u.username==temp.username)
        {
            if(u.password==temp.password)
            {
                matched=true;
                break;
            }
        }
        }
    }
    fin.close();

}

bool login::loginstatus(){
    return matched;
}

login::~login(){}
