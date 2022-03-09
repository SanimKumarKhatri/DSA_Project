#include "mainwindow.h"
#include <QApplication>
#include "bst.h"

Patient r[20];
BST bigdata;
void setdata(){

    qDebug()<<"Inside setup data";

    r[0].patientNo= 1;
    r[0].age=21;
    r[0].gender = "Male";
    r[0].fname= "abcd";
    r[0].lname= "abcd";
    r[0].patienttype = "Outpatient";
    r[0].dateofVisit = "2078/11/25";
    r[0].dateofDischarge = "";
    r[0].detail = "Regular Checkup";

    r[1].patientNo= 2;
    r[1].age=21;
    r[1].gender = "Male";
    r[1].fname= "efgh";
    r[1].lname= "efgh";
    r[1].patienttype = "Outpatient";
    r[1].dateofVisit = "2078/11/25";
    r[1].dateofDischarge = "";
    r[1].detail = "Nothing";

    r[2].patientNo= 3;
    r[2].age=21;
    r[2].gender = "Male";
    r[2].fname= "ijkl";
    r[2].lname= "ijkl";
    r[2].patienttype = "Inpatient";
    r[2].dateofVisit = "2078/10/25";
    r[2].dateofDischarge = "2078/11/25";
    r[2].detail = "General Ward";

    r[3].patientNo= 4;
    r[3].age=22;
    r[3].gender = "Female";
    r[3].fname= "Someone";
    r[3].lname= "Someone";
    r[3].patienttype = "Inpatient";
    r[3].dateofVisit = "2078/11/25";
    r[3].dateofDischarge = "";
    r[3].detail = "ICU";

    r[4].patientNo= 5;
    r[4].age=30;
    r[4].gender = "Female";
    r[4].fname= "Rita";
    r[4].lname= "Someone";
    r[4].patienttype = "Inpatient";
    r[4].dateofVisit = "2078/12/25";
    r[4].dateofDischarge = "2078/12/27";
    r[4].detail = "Fracture";

    r[5].patientNo= 6;
    r[5].age=42;
    r[5].gender = "Male";
    r[5].fname= "Someone";
    r[5].lname= "Here";
    r[5].patienttype = "Outpatient";
    r[5].dateofVisit = "2078/10/21";
    r[5].dateofDischarge = "";
    r[5].detail = "Checkup";

    r[6].patientNo= 7;
    r[6].age=22;
    r[6].gender = "Others";
    r[6].fname= "Noone";
    r[6].lname= "Someone";
    r[6].patienttype = "Inpatient";
    r[6].dateofVisit = "2078/01/25";
    r[6].dateofDischarge = "2078/02/9";
    r[6].detail = "SICU";

    r[7].patientNo= 8;
    r[7].age=56;
    r[7].gender = "Female";
    r[7].fname= "Someone";
    r[7].lname= "Noone";
    r[7].patienttype = "Inpatient";
    r[7].dateofVisit = "2078/08/08";
    r[7].dateofDischarge = "2077/11/09";
    r[7].detail = "Kidney transplant";

    r[8].patientNo= 9;
    r[8].age=60;
    r[8].gender = "Male";
    r[8].fname= "Ram";
    r[8].lname= "Noone";
    r[8].patienttype = "Inpatient";
    r[8].dateofVisit = "2078/08/08";
    r[8].dateofDischarge = "2077/10/09";
    r[8].detail = "Kidney transplant";

    r[9].patientNo= 10;
    r[9].age=69;
    r[9].gender = "Others";
    r[9].fname= "Bob";
    r[9].lname= "Marley";
    r[9].patienttype = "Inpatient";
    r[9].dateofVisit = "2078/08/08";
    r[9].dateofDischarge = "2077/10/09";
    r[9].detail = "Heart transplant";

    r[10].patientNo= 11;
    r[10].age=40;
    r[10].gender = "Male";
    r[10].fname= "Tim";
    r[10].lname= "Marley";
    r[10].patienttype = "Inpatient";
    r[10].dateofVisit = "2078/08/08";
    r[10].dateofDischarge = "2077/10/09";
    r[10].detail = "Liver transplant";

    r[11].patientNo= 12;
    r[11].age=58;
    r[11].gender = "Male";
    r[11].fname= "Phineas";
    r[11].lname= "Something";
    r[11].patienttype = "Inpatient";
    r[11].dateofVisit = "2078/08/08";
    r[11].dateofDischarge = "2077/10/09";
    r[11].detail = "Denture";

    r[12].patientNo= 13;
    r[12].age=58;
    r[12].gender = "Male";
    r[12].fname= "Ferb";
    r[12].lname= "Something";
    r[12].patienttype = "Inpatient";
    r[12].dateofVisit = "2078/08/08";
    r[12].dateofDischarge = "2077/10/09";
    r[12].detail = "Denture";

    r[13].patientNo= 14;
    r[13].age=58;
    r[13].gender = "Male";
    r[13].fname= "N";
    r[13].lname= "Something";
    r[13].patienttype = "Inpatient";
    r[13].dateofVisit = "2078/08/08";
    r[13].dateofDischarge = "2077/10/09";
    r[13].detail = "Denture";

    r[14].patientNo= 15;
    r[14].age=88;
    r[14].gender = "Male";
    r[14].fname= "old";
    r[14].lname= "man";
    r[14].patienttype = "Inpatient";
    r[14].dateofVisit = "2078/08/08";
    r[14].dateofDischarge = "2077/10/09";
    r[14].detail = "Denture";
}

void tree_setup(){
    qDebug()<<"Inside tree setup";
    for(int i=0; i<15;i++){
        qDebug()<<"Inside tree setup "<<i;
        bigdata.root=bigdata.insert(bigdata.root,r[i]);
        qDebug()<<bigdata.root->a.patientNo;
        qDebug()<<bigdata.MAXID;
        bigdata.MAXID++;
    }
}

int main(int argc, char *argv[])
{
    qDebug()<<"Started!";
    setdata();
    tree_setup();
    //qDebug()<<bigdata.root->a.fname;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
