#ifndef APPOINTMENT_H
#define APPOINTMENT_H
#include<string.h>
#include<fstream>
#include<iostream>
#include<QDebug>
#include <QStandardPaths>
int GetNumA();
void PutNumA(int S);
void LoC5(char *L);
using namespace std;
void AddDataA(char *D_N,char *P_N,char *V_T,char *T,char *D);

class Appointment
{
public:
    char DoC_Name[60];
    char PaT_Name[60];
    char Visit_Type[10];
    char Time[10];
    char Date[15];
    void GetData(char *D_N,char *P_N,char *V_T,char *T,char *D);
    void CopyData(char *D_N,char *P_N,char *V_T,char *T,char *D);
    Appointment();
    Appointment(Appointment &D);
};

#endif // APPOINTMENT_H
