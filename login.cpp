#include "login.h"

QDataStream &operator>>(QDataStream &in, user &p){
    in >> p.username >> p.password;
    return in;
}

QDataStream &operator<<(QDataStream &out, const user &p){
    out << p.username << p.password;
    return out;
}


login::login(){
    this->matched=false;
}

void login::logindetail(QString a, QString b){
    //QString c= a.QString::toStdString();
    //QString d= b.QString::toStdString();
    //std::cout<<c<<" "<<d;
   // QString x = QString::fromStdString(c);
    //QString y= QString::fromStdString(d);
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
        in>>temp;
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

    /*file.open("login.txt", std::ios::in);
    if(!file.is_open())
    {
      qDebug()<<"Cannot open the login file";
    }
    while(file>>temp.username>>temp.password)
    {
        std::cout<<temp.username<<" "<<temp.password;
        QString f = QString::fromUtf8(temp.username);
        QString g = QString::fromUtf8(temp.password);
        qDebug() << "Read: "<<f<<" "<<g;
        if(u.getUsername()==temp.username)
        {
            if(u.getPassword()==temp.password)
            {
                matched = true;
                break;
            }
        }
    }*/

}

bool login::loginstatus(){
    return matched;
}

login::~login(){}
