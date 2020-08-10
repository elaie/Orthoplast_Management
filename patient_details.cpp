#include "patient_details.h"
Patient_Details::Patient_Details()
{

}
Patient_Details::Patient_Details(Patient_Details &D)
{
    strcpy(info,D.info);
    strcpy(IDATE,D.IDATE);
}
void Patient_Details::IGetData(char *I,char *D)
{
    strcpy(info,I);
    strcpy(IDATE,D);
}
void Patient_Details::ICopyData(char *I,char *D)
{
    strcpy(I,info);
    strcpy(D,IDATE);
}
void AddDataP(char *I,char *D,char *N)
{
    char Location[180];
    LoC3(Location);
    int SIZE;
    char temp[280];
    strcpy(temp,Location);
    strcat(temp,N);
    strcat(temp,".dat");
    SIZE=GetNumI(N);
    SIZE++;
    ofstream fstream_ob;
    fstream_ob.open(temp,ios::binary|ios::app);
    Patient_Details D2;
    D2.IGetData(I,D);
    fstream_ob.write( (char *) & D2, sizeof(D2));
    PutNumI(N,SIZE);
    fstream_ob.close();
}
int GetNumI(char *n)
{
    QString LOC;
    QStringList loc;
    char Location[180];
    loc = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation);
    LOC=loc.at(0);
    strcpy(Location,LOC.toStdString().c_str());
    strcat(Location,"/Hospital Management/Data/Info/");
    char temp[280];
    strcpy(temp,Location);
    strcat(temp,n);
    strcat(temp,"_N.txt");
    qDebug()<<temp;
    int num = 0;
    ifstream File;
    File.open(temp);
    if (!File)
    {
        return num;
    }
    File>>num;
    File.close();
    return num;
}
void PutNumI(char *n,int num)
{
    QString LOC;
    QStringList loc;
    char Location[180];
    loc = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation);
    LOC=loc.at(0);
    strcpy(Location,LOC.toStdString().c_str());
    strcat(Location,"/Hospital Management/Data/Info/");
    char temp[280];
    strcpy(temp,Location);
    strcat(temp,n);
    strcat(temp,"_N.txt");
    qDebug()<<"TEMP: "<<temp;
    ofstream File;
    File.open(temp,ios::out);

    File<<num;
    File.close();
    return;
}
void LoC3(char *L)
{
    QString LOC;
    QStringList loc;
    loc = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation);
    LOC=loc.at(0);
    strcpy(L,LOC.toStdString().c_str());
    strcat(L,"/Hospital Management/Data/Info/");
}
