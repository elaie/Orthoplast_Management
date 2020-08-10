#include "billing.h"
Billing::Billing()
{

}
Billing::Billing(Billing &D)
{
    strcpy(Name,D.Name);
    Bill_No=D.Bill_No;
    Rate=D.Rate;
    QTY=D.QTY;
    Discount=D.Discount;
    Extra=D.Extra;
    Total=D.Total;
    strcpy(Date,D.Date);
    Remain=D.Remain;
}
void Billing::GetDataB(char *N,float B,float R,float Q,float Di,float E,float T,char *D,float RM)
{
    strcpy(Name,N);
    Bill_No=B;
    Rate=R;
    QTY=Q;
    Discount=Di;
    Extra=E;
    Total=T;
    strcpy(Date,D);
    Remain=RM;
}
void Billing::CopyDataB(char *N,float &B,float &R,float &Q,float &Di,float &E,float &T,char *D,float RM)
{
    strcpy(N,Name);
    B=Bill_No;
    R=Rate;
    Q=QTY;
    Di=Discount;
    E=Extra;
    T=Total;
    strcpy(D,Date);
    RM=Remain;
}
void AddDataB(char *N,float B,float R,float Q,float Di,float E,float T,char *D,char *NA,float RM)
{
    char Location[180],Location2[180],temp[40],temp2[40];
    LoC6(Location,NA);
    int SIZE,flag=0;
    SIZE=GetNumB(NA);
    if(SIZE<4999)
    {
        SIZE++;
        ofstream fstream_ob;
        strcat(Location,".dat");
        qDebug()<<Location;
        fstream_ob.open(Location,ios::binary|ios::app);
        Billing D2;
        D2.GetDataB(N,B,R,Q,Di,E,T,D,RM);
        fstream_ob.write( (char *) & D2, sizeof(D2));
        PutNumB(SIZE,NA);
        fstream_ob.close();
    }
    else
    {
        QString LOC;
        QStringList loc;
        loc = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation);
        LOC=loc.at(0);
        strcpy(Location2,LOC.toStdString().c_str());
        strcat(Location2,"/Hospital Management/Data/Main/BillNumbers_");
        strcat(Location2,NA);
        strcat(Location2,".txt");
        fstream File,FILE2;
        File.open(Location2,ios::in);
        if (!File)
        {
            flag =0;
        }
        else
            File>>flag;
        flag++;
        File.close();
        qDebug()<<flag;
        FILE2.open(Location2,ios::out);
        FILE2<<flag;
        FILE2.close();
        qDebug()<<Location2;

        strcpy(temp,"(");
        sprintf(temp2, "%d", flag);
        strcat(temp,temp2);
        strcat(temp,")");



        qDebug()<<temp;
        strcat(Location,temp);
        strcat(Location,".dat");
        qDebug()<<"LOCATION: "<<Location;
        ofstream fstream_ob1;
        fstream_ob1.open(Location,ios::binary|ios::app);
        Billing D2;
        D2.GetDataB(N,B,R,Q,Di,E,T,D,RM);
        fstream_ob1.write( (char *) & D2, sizeof(D2));
        fstream_ob1.close();

        strcpy(Location,LOC.toStdString().c_str());
        strcat(Location,"/Hospital Management/Data/Billing/Bill_");
        strcat(Location,NA);
        strcat(Location,"_N");
        strcat(Location,temp);
        strcat(Location,".txt");
        ofstream File2;
        File2.open(Location,ios::out);
        File2<<flag;
        File2.close();
    }

}
int GetNumB(char *n)
{
    QString LOC;
    QStringList loc;
    char Location[180];
    loc = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation);
    LOC=loc.at(0);
    strcpy(Location,LOC.toStdString().c_str());
    strcat(Location,"/Hospital Management/Data/Billing/Bill_");
    strcat(Location,n);
    strcat(Location,"_N.txt");
    int num = 0;
    ifstream File;
    File.open(Location);
    if (!File)
    {
        return num;
    }
    File>>num;
    File.close();
    return num;
}


void PutNumB(int num,char *n)
{
    QString LOC;
    QStringList loc;
    char Location[180];
    loc = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation);
    LOC=loc.at(0);
    strcpy(Location,LOC.toStdString().c_str());
    strcat(Location,"/Hospital Management/Data/Billing/Bill_");
    strcat(Location,n);
    strcat(Location,"_N.txt");
    qDebug()<<Location;
    ofstream File;
    File.open(Location,ios::out);
    File<<num;
    File.close();
    return;
}
void LoC6(char *L)
{
    QString LOC;
    QStringList loc;
    loc = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation);
    LOC=loc.at(0);
    strcpy(L,LOC.toStdString().c_str());
    strcat(L,"/Hospital Management/Data/Billing/Billing.dat");
}
void LoC6(char *L,char *n)
{
    QString LOC;
    QStringList loc;
    loc = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation);
    LOC=loc.at(0);
    strcpy(L,LOC.toStdString().c_str());
    strcat(L,"/Hospital Management/Data/Billing/Billing_");
    strcat(L,n);
    qDebug()<<L;
   // strcat(L,".dat");
}
