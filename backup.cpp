#include "backup.h"

Backup::Backup()
{

}
void Backup::Doctor_Backup()
{
    int SIZE,num;
    char Location[180],Location2[180],Location3[180];
    QString LOC;
    QStringList loc;
    loc = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation);
    LOC=loc.at(0);
    strcpy(Location,LOC.toStdString().c_str());
    strcpy(Location2,LOC.toStdString().c_str());
    strcpy(Location3,LOC.toStdString().c_str());
    strcat(Location3,"/Hospital Management/Data/Backup/D_Size.txt");
    strcat(Location,"/Hospital Management/Data/Main/DOC.dat");
    strcat(Location2,"/Hospital Management/Data/Backup/DOC.dat");
    SIZE=GetNum();
    num=SIZE;
    Doctor D[SIZE];
    ifstream fstream_ob;
    ofstream fstream_ob2;
    fstream_ob.open(Location,ios::binary|ios::in);
    fstream_ob.read( (char *) & D, sizeof(D));
    fstream_ob.close();
    fstream_ob2.open(Location2,ios::binary|ios::out);
    fstream_ob2.write( (char *) & D, sizeof(D));
    ofstream File;
    File.open(Location3,ios::out);
    File<<num;
    File.close();
    fstream_ob2.close();
}
void Backup::Patient_Backup()
{
    int SIZE,num;
    char Location[180],Location2[180],Location3[180];
    QString LOC;
    QStringList loc;
    loc = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation);
    LOC=loc.at(0);
    strcpy(Location,LOC.toStdString().c_str());
    strcpy(Location2,LOC.toStdString().c_str());
    strcpy(Location3,LOC.toStdString().c_str());
    strcat(Location3,"/Hospital Management/Data/Backup/P_Size.txt");
    strcat(Location,"/Hospital Management/Data/Main/Pat.dat");
    strcat(Location2,"/Hospital Management/Data/Backup/Pat.dat");
    SIZE=GetNumP();
    num=SIZE;
    Patient D[SIZE];
    ifstream fstream_ob;
    ofstream fstream_ob2;
    fstream_ob.open(Location,ios::binary|ios::in);
    fstream_ob.read( (char *) & D, sizeof(D));
    fstream_ob.close();
    fstream_ob2.open(Location2,ios::binary|ios::out);
    fstream_ob2.write( (char *) & D, sizeof(D));
    ofstream File;
    File.open(Location3,ios::out);
    File<<num;
    File.close();
    fstream_ob2.close();
}
void Backup::Patient_Details_Backup()
{
    char Location4[180],temp[20],temp2[20],temp3[20];
    LoC2(Location4);
    int SIZE,num,PSIZE;
    PSIZE=GetNumP();
    fstream file;
    ifstream fstream_ob4;
    fstream_ob4.open(Location4,ios::binary|ios::in);
    Patient D12[PSIZE];
    fstream_ob4.read( (char *) & D12, sizeof(D12));
    fstream_ob4.close();
    char Location[180],Location2[180],Location3[180];
    QString LOC;
    QStringList loc;
    loc = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation);
    LOC=loc.at(0);
    for(int I=0;I<PSIZE;I++)
    {
        for(int J=0;J<5;J++)
        {
            switch(J)
            {
            case 0:
                strcpy(temp,"_MHO.dat");
                strcpy(temp2,"_MHO_N.txt");
                strcpy(temp3,D12[I].NAME);
                strcat(temp3,"_MHO");
                break;
            case 1:
                strcpy(temp,"_CMO.dat");
                strcpy(temp2,"_CMO_N.txt");
                strcpy(temp3,D12[I].NAME);
                strcat(temp3,"_CMO");
                break;
            case 2:
                strcpy(temp,"_FND.dat");
                strcpy(temp2,"_FND_N.txt");
                strcpy(temp3,D12[I].NAME);
                strcat(temp3,"_FND");
                break;
            case 3:
                strcpy(temp,"_INV.dat");
                strcpy(temp2,"_INV_N.txt");
                strcpy(temp3,D12[I].NAME);
                strcat(temp3,"_INV");
                break;
            case 4:
                strcpy(temp,"_PHY.dat");
                strcpy(temp2,"_PHY_N.txt");
                strcpy(temp3,D12[I].NAME);
                strcat(temp3,"_PHY");
                break;
            }
            strcpy(Location,LOC.toStdString().c_str());
            strcpy(Location2,LOC.toStdString().c_str());
            strcpy(Location3,LOC.toStdString().c_str());
            strcat(Location,"/Hospital Management/Data/Backup/");
            strcat(Location,D12[I].NAME);
            strcat(Location,temp);
            //qDebug()<<"LOCATION 1: "<<Location;
            strcat(Location2,"/Hospital Management/Data/Info/");
            strcat(Location2,D12[I].NAME);
            strcat(Location2,temp);
            qDebug()<<"LOCATION 2: "<<Location2;
            strcat(Location3,"/Hospital Management/Data/Backup/");
            strcat(Location3,D12[I].NAME);
            strcat(Location3,temp2);
            //qDebug()<<"LOCATION 3: "<<Location3;

            file.open(Location2);
            if(file.fail())
            {
                qDebug()<<"FILE NOT FOUND";
                continue;
            }
            qDebug()<<"FILE FOUND";
            file.close();
            SIZE=GetNumI(temp3);
                Patient_Details D[SIZE];
                qDebug()<<D12[I].NAME;
                num=SIZE;

                ifstream fstream_ob;
                ofstream fstream_ob2;
                fstream_ob.open(Location2,ios::binary|ios::in);
                fstream_ob.read( (char *) & D, sizeof(D));
                fstream_ob.close();
                fstream_ob2.open(Location,ios::binary|ios::out);
                fstream_ob2.write( (char *) & D, sizeof(D));
                ofstream File;
                File.open(Location3,ios::out);
                File<<num;
                File.close();
                fstream_ob2.close();
        }
    }
}
void Backup::Billing_Backup()
{
    char Location4[180],temp[20];
    int SIZE,num;
    for(int J=0;J<9;J++)
    {
        switch(J)
        {
        case 0:
            strcpy(temp,"OPD");
            break;
        case 1:
            strcpy(temp,"IPD");
            break;
        case 2:
            strcpy(temp,"PNO");
            break;
        case 3:
            strcpy(temp,"SPT");
            break;
        case 4:
            strcpy(temp,"ACC");
            break;
        case 5:
            strcpy(temp,"DRS");
            break;
        case 6:
            strcpy(temp,"ROOM");
            break;
        case 7:
            strcpy(temp,"PKG");
            break;
        case 8:
            strcpy(temp,"OTH");
            break;
        }
        LoC6(Location4,temp);
        fstream file;
        char Location[180],Location2[180],Location3[180];
        QString LOC;
        QStringList loc;
        loc = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation);
        LOC=loc.at(0);
                strcpy(Location,LOC.toStdString().c_str());
                strcpy(Location2,LOC.toStdString().c_str());
                strcpy(Location3,LOC.toStdString().c_str());
                strcat(Location,"/Hospital Management/Data/Backup/Billing_");
                strcat(Location,temp);
                strcat(Location,".dat");
                qDebug()<<"LOCATION 1: "<<Location;
                strcat(Location2,"/Hospital Management/Data/Billing/Billing_");
                strcat(Location2,temp);
                strcat(Location2,".dat");
                qDebug()<<"LOCATION 2: "<<Location2;
                strcat(Location3,"/Hospital Management/Data/Backup/Bill_");
                strcat(Location3,temp);
                strcat(Location3,"_N.txt");
                //qDebug()<<"LOCATION 3: "<<Location3;
                file.open(Location2);
                if(file.fail())
                {
                    qDebug()<<"FILE NOT FOUND";
                    continue;
                }
                qDebug()<<"FILE FOUND";
                file.close();
                SIZE=GetNumB(temp);
                Billing D[SIZE];

                num=SIZE;

                ifstream fstream_ob;
                ofstream fstream_ob2;
                fstream_ob.open(Location2,ios::binary|ios::in);
                fstream_ob.read( (char *) & D, sizeof(D));
                fstream_ob.close();
                fstream_ob2.open(Location,ios::binary|ios::out);
                fstream_ob2.write( (char *) & D, sizeof(D));
                ofstream File;
                File.open(Location3,ios::out);
                File<<num;
                File.close();
                fstream_ob2.close();
        }
}
void Backup::Appointment_Backup()
{
    int SIZE,num;
    char Location[180],Location2[180],Location3[180];
    QString LOC;
    QStringList loc;
    loc = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation);
    LOC=loc.at(0);
    strcpy(Location,LOC.toStdString().c_str());
    strcpy(Location2,LOC.toStdString().c_str());
    strcpy(Location3,LOC.toStdString().c_str());
    strcat(Location3,"/Hospital Management/Data/Backup/APP_N.txt");
    strcat(Location,"/Hospital Management/Data/Main/Appointment.dat");
    strcat(Location2,"/Hospital Management/Data/Backup/Appointment.dat");
    SIZE=GetNumA();
    num=SIZE;
    Appointment D[SIZE];
    ifstream fstream_ob;
    ofstream fstream_ob2;
    fstream_ob.open(Location,ios::binary|ios::in);
    fstream_ob.read( (char *) & D, sizeof(D));
    fstream_ob.close();
    fstream_ob2.open(Location2,ios::binary|ios::out);
    fstream_ob2.write( (char *) & D, sizeof(D));
    ofstream File;
    File.open(Location3,ios::out);
    File<<num;
    File.close();
    fstream_ob2.close();
}
void Backup::Doctor_Restore()
{
    int SIZE,num;
    char Location[180],Location2[180],Location3[180];
    QString LOC;
    QStringList loc;
    loc = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation);
    LOC=loc.at(0);
    strcpy(Location,LOC.toStdString().c_str());
    strcpy(Location2,LOC.toStdString().c_str());
    strcpy(Location3,LOC.toStdString().c_str());
    strcat(Location3,"/Hospital Management/Data/Backup/D_Size.txt");
    strcat(Location,"/Hospital Management/Data/Main/DOC.dat");
    strcat(Location2,"/Hospital Management/Data/Backup/DOC.dat");


    ifstream File1;
    File1.open(Location3);
    if (!File1)
    {
        SIZE=0;
    }
    else
    File1>>SIZE;
    File1.close();

    num=SIZE;
    Doctor D[SIZE];
    ifstream fstream_ob;
    ofstream fstream_ob2;
    fstream_ob.open(Location2,ios::binary|ios::in);
    fstream_ob.read( (char *) & D, sizeof(D));
    fstream_ob.close();
    fstream_ob2.open(Location,ios::binary|ios::out);
    fstream_ob2.write( (char *) & D, sizeof(D));
    PutNum(SIZE);
    fstream_ob2.close();
}
void Backup::Patient_Restore()
{
    int SIZE,num;
    char Location[180],Location2[180],Location3[180];
    QString LOC;
    QStringList loc;
    loc = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation);
    LOC=loc.at(0);
    strcpy(Location,LOC.toStdString().c_str());
    strcpy(Location2,LOC.toStdString().c_str());
    strcpy(Location3,LOC.toStdString().c_str());
    strcat(Location3,"/Hospital Management/Data/Backup/P_Size.txt");
    strcat(Location,"/Hospital Management/Data/Main/Pat.dat");
    strcat(Location2,"/Hospital Management/Data/Backup/Pat.dat");
    ifstream File1;
    File1.open(Location3);
    if (!File1)
    {
        SIZE=0;
    }
    else
    File1>>SIZE;
    File1.close();

    num=SIZE;
    Patient D[SIZE];
    ifstream fstream_ob;
    ofstream fstream_ob2;
    fstream_ob.open(Location2,ios::binary|ios::in);
    fstream_ob.read( (char *) & D, sizeof(D));
    fstream_ob.close();
    fstream_ob2.open(Location,ios::binary|ios::out);
    fstream_ob2.write( (char *) & D, sizeof(D));
    PutNumP(SIZE);
    fstream_ob2.close();
}
void Backup::Patient_Details_Restore()
{
    char Location4[180],temp[20],temp2[20],temp3[20];
    LoC2(Location4);
    int SIZE,num,PSIZE;
    PSIZE=GetNumP();
    fstream file;
    ifstream fstream_ob4;
    fstream_ob4.open(Location4,ios::binary|ios::in);
    Patient D12[PSIZE];
    fstream_ob4.read( (char *) & D12, sizeof(D12));
    fstream_ob4.close();
    char Location[180],Location2[180],Location3[180];
    QString LOC;
    QStringList loc;
    loc = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation);
    LOC=loc.at(0);
    for(int I=0;I<PSIZE;I++)
    {
        for(int J=0;J<5;J++)
        {
            switch(J)
            {
            case 0:
                strcpy(temp,"_MHO.dat");
                strcpy(temp2,"_MHO_N.txt");
                strcpy(temp3,D12[I].NAME);
                strcat(temp3,"_MHO");
                break;
            case 1:
                strcpy(temp,"_CMO.dat");
                strcpy(temp2,"_CMO_N.txt");
                strcpy(temp3,D12[I].NAME);
                strcat(temp3,"_CMO");
                break;
            case 2:
                strcpy(temp,"_FND.dat");
                strcpy(temp2,"_FND_N.txt");
                strcpy(temp3,D12[I].NAME);
                strcat(temp3,"_FND");
                break;
            case 3:
                strcpy(temp,"_INV.dat");
                strcpy(temp2,"_INV_N.txt");
                strcpy(temp3,D12[I].NAME);
                strcat(temp3,"_INV");
                break;
            case 4:
                strcpy(temp,"_PHY.dat");
                strcpy(temp2,"_PHY_N.txt");
                strcpy(temp3,D12[I].NAME);
                strcat(temp3,"_PHY");
                break;
            }
            strcpy(Location,LOC.toStdString().c_str());
            strcpy(Location2,LOC.toStdString().c_str());
            strcpy(Location3,LOC.toStdString().c_str());
            strcat(Location,"/Hospital Management/Data/Backup/");
            strcat(Location,D12[I].NAME);
            strcat(Location,temp);
            //qDebug()<<"LOCATION 1: "<<Location;
            strcat(Location2,"/Hospital Management/Data/Info/");
            strcat(Location2,D12[I].NAME);
            strcat(Location2,temp);
            qDebug()<<"LOCATION 2: "<<Location2;
            strcat(Location3,"/Hospital Management/Data/Backup/");
            strcat(Location3,D12[I].NAME);
            strcat(Location3,temp2);
            //qDebug()<<"LOCATION 3: "<<Location3;

            file.open(Location);
            if(file.fail())
            {
                qDebug()<<"FILE NOT FOUND";
                continue;
            }
            qDebug()<<"FILE FOUND";
            file.close();


            ifstream File1;
            File1.open(Location3);
            if (!File1)
            {
                SIZE=0;
            }
            else
            File1>>SIZE;
            File1.close();


                Patient_Details D[SIZE];
                qDebug()<<D12[I].NAME;
                num=SIZE;

                ifstream fstream_ob;
                ofstream fstream_ob2;
                fstream_ob.open(Location,ios::binary|ios::in);
                fstream_ob.read( (char *) & D, sizeof(D));
                fstream_ob.close();
                fstream_ob2.open(Location2,ios::binary|ios::out);
                fstream_ob2.write( (char *) & D, sizeof(D));
                PutNumI(temp3,SIZE);
                fstream_ob2.close();
        }
    }
}
void Backup::Appointment_Restore()
{
    int SIZE,num;
    char Location[180],Location2[180],Location3[180];
    QString LOC;
    QStringList loc;
    loc = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation);
    LOC=loc.at(0);
    strcpy(Location,LOC.toStdString().c_str());
    strcpy(Location2,LOC.toStdString().c_str());
    strcpy(Location3,LOC.toStdString().c_str());
    strcat(Location3,"/Hospital Management/Data/Backup/APP_N.txt");
    strcat(Location,"/Hospital Management/Data/Main/Appointment.dat");
    strcat(Location2,"/Hospital Management/Data/Backup/Appointment.dat");
    ifstream File1;
    File1.open(Location3);
    if (!File1)
    {
        SIZE=0;
    }
    else
    File1>>SIZE;
    File1.close();
    num=SIZE;
    Appointment D[SIZE];
    ifstream fstream_ob;
    ofstream fstream_ob2;
    fstream_ob.open(Location2,ios::binary|ios::in);
    fstream_ob.read( (char *) & D, sizeof(D));
    fstream_ob.close();
    fstream_ob2.open(Location,ios::binary|ios::out);
    fstream_ob2.write( (char *) & D, sizeof(D));
    PutNumA(SIZE);
    fstream_ob2.close();
}
void Backup::Billing_Restore()
{
    qDebug()<<"Billing Restore";
    char Location4[180],temp[20];
    int PSIZE,SIZE,num;
    for(int J=0;J<9;J++)
    {
        //qDebug()<<"GOING INSIDE LOOP";
        switch(J)
        {
        case 0:
            strcpy(temp,"OPD");
            break;
        case 1:
            strcpy(temp,"IPD");
            break;
        case 2:
            strcpy(temp,"PNO");
            break;
        case 3:
            strcpy(temp,"SPT");
            break;
        case 4:
            strcpy(temp,"ACC");
            break;
        case 5:
            strcpy(temp,"DRS");
            break;
        case 6:
            strcpy(temp,"ROOM");
            break;
        case 7:
            strcpy(temp,"PKG");
            break;
        case 8:
            strcpy(temp,"OTH");
            break;
        }
        LoC6(Location4,temp);
        PSIZE=GetNumB(temp);
        fstream file;
        char Location[180],Location2[180],Location3[180];
        QString LOC;
        QStringList loc;
        loc = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation);
        LOC=loc.at(0);
                strcpy(Location,LOC.toStdString().c_str());
                strcpy(Location2,LOC.toStdString().c_str());
                strcpy(Location3,LOC.toStdString().c_str());
                strcat(Location,"/Hospital Management/Data/Backup/Billing_");
                strcat(Location,temp);
                strcat(Location,".dat");
                qDebug()<<"LOCATION 1: "<<Location;
                strcat(Location2,"/Hospital Management/Data/Billing/Billing_");
                strcat(Location2,temp);
                strcat(Location2,".dat");
                qDebug()<<"LOCATION 2: "<<Location2;
                strcat(Location3,"/Hospital Management/Data/Backup/Bill_");
                strcat(Location3,temp);
                strcat(Location3,"_N.txt");
                //qDebug()<<"LOCATION 3: "<<Location3;
                file.open(Location);
                if(file.fail())
                {
                    qDebug()<<"FILE NOT FOUND";
                    continue;
                }
                qDebug()<<"FILE FOUND";
                file.close();
                ifstream File1;
                File1.open(Location3);
                if (!File1)
                {
                    SIZE=0;
                }
                else
                File1>>SIZE;
                File1.close();
                Billing D[SIZE];

                num=SIZE;

                ifstream fstream_ob;
                ofstream fstream_ob2;
                fstream_ob.open(Location,ios::binary|ios::in);
                fstream_ob.read( (char *) & D, sizeof(D));
                fstream_ob.close();
                fstream_ob2.open(Location2,ios::binary|ios::out);
                fstream_ob2.write( (char *) & D, sizeof(D));
                PutNumB(SIZE,temp);
                fstream_ob2.close();
        }
}
