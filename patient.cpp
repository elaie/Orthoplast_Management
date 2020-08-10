#include "patient.h"
Patient::Patient()
{

}
Patient::Patient(Patient &D)
{
    strcpy(NAME,D.NAME);
    strcpy(ADD,D.ADD);
    strcpy(DOB,D.DOB);
    strcpy(PHNO,D.PHNO);
    strcpy(EMAIL,D.EMAIL);
    strcpy(GEN,D.GEN);
    strcpy(BLOOD_G,D.BLOOD_G);
    strcpy(REF,D.REF);
}
void Patient::GetData(char *N,char *A,char *DO,char *P,char *E,char *G,char *BG,char *ref)
{
    strcpy(NAME,N);
    strcpy(ADD,A);
    strcpy(DOB,DO);
    strcpy(PHNO,P);
    strcpy(EMAIL,E);
    strcpy(GEN,G);
    strcpy(BLOOD_G,BG);
    strcpy(REF,ref);
}
void Patient::CopyData(char *N,char *A,char *DO,char *P,char *E,char *G,char *BG,char *ref)
{
    strcpy(N,NAME);
    strcpy(A,ADD);
    strcpy(DO,DOB);
    strcpy(P,PHNO);
    strcpy(E,EMAIL);
    strcpy(G,GEN);
    strcpy(BG,BLOOD_G);
    strcpy(ref,REF);
}
void AddDataP(char *N,char *A,char *DO,char *P,char *E,char *G,char *BG,char *reff)
{
    char Location[180];
    LoC2(Location);
    int SIZE,flag=0,k;
    char temp[60],temp2[60];
    SIZE=GetNumP();
    SIZE++;
    ofstream fstream_ob;
    fstream_ob.open(Location,ios::binary|ios::app);
    ifstream fstream_ob2;
    fstream_ob2.open(Location,ios::binary|ios::in);
    Patient D[SIZE],D2;
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
    D2.GetData(temp,A,DO,P,E,G,BG,reff);
    fstream_ob.write( (char *) & D2, sizeof(D2));
    PutNumP(SIZE);
    fstream_ob.close();
    fstream_ob2.close();
}
int GetNumP()
{
    QString LOC;
    QStringList loc;
    char Location[180];
    loc = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation);
    LOC=loc.at(0);
    strcpy(Location,LOC.toStdString().c_str());
    strcat(Location,"/Hospital Management/Data/Main/P_Size.txt");
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
void PutNumP(int num)
{
    QString LOC;
    QStringList loc;
    char Location[180];
    loc = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation);
    LOC=loc.at(0);
    strcpy(Location,LOC.toStdString().c_str());
    strcat(Location,"/Hospital Management/Data/Main/P_Size.txt");
    ofstream File;
    File.open(Location,ios::out);

    File<<num;
    File.close();
    return;
}
void LoC2(char *L)
{
    QString LOC;
    QStringList loc;
    loc = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation);
    LOC=loc.at(0);
    strcpy(L,LOC.toStdString().c_str());
    strcat(L,"/Hospital Management/Data/Main/Pat.dat");
}
