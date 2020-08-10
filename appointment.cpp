#include "appointment.h"
Appointment::Appointment()
{

}
Appointment::Appointment(Appointment &D)
{
    strcpy(DoC_Name,D.DoC_Name);
    strcpy(PaT_Name,D.PaT_Name);
    strcpy(Visit_Type,D.Visit_Type);
    strcpy(Time,D.Time);
    strcpy(Date,D.Date);
}
void Appointment::GetData(char *D_N,char *P_N,char *V_T,char *T,char *D)
{
    strcpy(DoC_Name,D_N);
    strcpy(PaT_Name,P_N);
    strcpy(Visit_Type,V_T);
    strcpy(Time,T);
    strcpy(Date,D);
}
void Appointment::CopyData(char *D_N,char *P_N,char *V_T,char *T,char *D)
{
    strcpy(D_N,DoC_Name);
    strcpy(P_N,PaT_Name);
    strcpy(V_T,Visit_Type);
    strcpy(T,Time);
    strcpy(D,Date);
}
void AddDataA(char *D_N,char *P_N,char *V_T,char *T,char *D)
{
    char Location[180],Location2[180],temp[60],temp2[60];
    int flag=0;
    LoC5(Location);
    int SIZE;
    SIZE=GetNumA();
    if(SIZE<4999)
    {
        SIZE++;
        ofstream fstream_ob;
        strcat(Location,".dat");
        fstream_ob.open(Location,ios::binary|ios::app);
        Appointment D2;
        D2.GetData(D_N,P_N,V_T,T,D);
        fstream_ob.write( (char *) & D2, sizeof(D2));
        PutNumA(SIZE);
        fstream_ob.close();
    }
    else
    {
        QString LOC;
        QStringList loc;
        loc = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation);
        LOC=loc.at(0);
        strcpy(Location2,LOC.toStdString().c_str());
        strcat(Location2,"/Hospital Management/Data/Main/APPNumbers_");
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
        Appointment D2;
        D2.GetData(D_N,P_N,V_T,T,D);
        fstream_ob1.write( (char *) & D2, sizeof(D2));
        fstream_ob1.close();

        strcpy(Location,LOC.toStdString().c_str());
         strcat(Location,"/Hospital Management/Data/Main/App_N");
        strcat(Location,temp);
        strcat(Location,".txt");
        ofstream File2;
        File2.open(Location,ios::out);
        File2<<flag;
        File2.close();
    }
}
int GetNumA()
{
    QString LOC;
    QStringList loc;
    char Location[180];
    loc = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation);
    LOC=loc.at(0);
    strcpy(Location,LOC.toStdString().c_str());
    strcat(Location,"/Hospital Management/Data/Main/App_N.txt");
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
void PutNumA(int num)
{
    QString LOC;
    QStringList loc;
    char Location[180];
    loc = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation);
    LOC=loc.at(0);
    strcpy(Location,LOC.toStdString().c_str());
    strcat(Location,"/Hospital Management/Data/Main/App_N.txt");
    ofstream File;
    File.open(Location,ios::out);
    File<<num;
    File.close();
    return;
}
void LoC5(char *L)
{
    QString LOC;
    QStringList loc;
    loc = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation);
    LOC=loc.at(0);
    strcpy(L,LOC.toStdString().c_str());
    strcat(L,"/Hospital Management/Data/Main/Appointment");
}
