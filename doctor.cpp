#include "doctor.h"
Doctor::Doctor(Doctor &DOCTOR)
{
    strcpy(NAME,DOCTOR.NAME);
    strcpy(ADD,DOCTOR.ADD);
    strcpy(SPEC,DOCTOR.SPEC);
    strcpy(PHNO,DOCTOR.PHNO);
    strcpy(EMAIL,DOCTOR.EMAIL);
}
Doctor::Doctor()
{

}
void Doctor::GetData(char *N,char *A,char *S,char *P,char *E)
{
    strcpy(NAME,N);
    strcpy(ADD,A);
    strcpy(SPEC,S);
    strcpy(PHNO,P);
    strcpy(EMAIL,E);
}
void Doctor::CopyData(char *N,char *A,char *S,char *P,char *E)
{
    strcpy(N,NAME);
    strcpy(A,ADD);
    strcpy(S,SPEC);
    strcpy(P,PHNO);
    strcpy(E,EMAIL);
}
void AddData(char *N,char *A,char *S,char *P,char *E)
{
    char Location[180];
    LoC(Location);
    int SIZE,flag=0,k;
    char temp[60],temp2[60];
    SIZE=GetNum();
    SIZE++;
    ofstream fstream_ob;
    fstream_ob.open(Location,ios::binary|ios::app);
    ifstream fstream_ob2;
    fstream_ob2.open(Location,ios::binary|ios::in);
    Doctor D[SIZE],D2;
    fstream_ob2.read( (char *) & D, sizeof(D));
    strcpy(temp,N);
    for(int i=0;i<SIZE;i++)
    {
        if(strcmp(D[i].NAME,temp)==0)
        {
            qDebug()<<"SAME NAME FOUND ";
            flag=1;
            break;
        }
    }
    if(flag==1)
    while(1)
    {
        strcpy(temp,N);
        strcat(temp,"(");
        sprintf(temp2, "%d", flag);
        strcat(temp,temp2);
        strcat(temp,")");
        qDebug()<<temp;
        for(k=0;k<SIZE;k++)
        {
            if(strcmp(D[k].NAME,temp)==0)
            {
                flag++;
                break;
                qDebug()<<temp<<"FOUND";
            }
        }
        if(k==SIZE)
            break;
    }
    qDebug()<<"FINAL: "<<temp;
    D2.GetData(temp,A,S,P,E);
    fstream_ob.write( (char *) & D2, sizeof(D2));
    PutNum(SIZE);
    fstream_ob.close();
    fstream_ob2.close();
}
int GetNum()
{
    QString LOC;
    QStringList loc;
    char Location[180];
    loc = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation);
    LOC=loc.at(0);
    strcpy(Location,LOC.toStdString().c_str());
    strcat(Location,"/Hospital Management/Data/Main/D_Size.txt");
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
void PutNum(int num)
{
    QString LOC;
    QStringList loc;
    char Location[180];
    loc = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation);
    LOC=loc.at(0);
    strcpy(Location,LOC.toStdString().c_str());
    strcat(Location,"/Hospital Management/Data/Main/D_Size.txt");
    ofstream File;
    File.open(Location,ios::out);
    File<<num;
    File.close();
    return;
}
void LoC(char *L)
{
    QString LOC;
    QStringList loc;
    loc = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation);
    LOC=loc.at(0);
    strcpy(L,LOC.toStdString().c_str());
    strcat(L,"/Hospital Management/Data/Main/DOC.dat");
}
