#ifndef PATIENT_DETAILS_H
#define PATIENT_DETAILS_H
#include<string.h>
#include<fstream>
#include<iostream>
#include<QDebug>
#include<QStandardPaths>
using namespace std;
int GetNumI(char *n);
void PutNumI(char *n,int S);
void AddDataP(char *I,char *D,char *N);
void LoC3(char *L);
class Patient_Details
{
public:
    char info[800];
    char IDATE[15];
    void IGetData(char *I,char *D);
    void ICopyData(char *I,char *D);
    Patient_Details();
    Patient_Details(Patient_Details &D);
};

#endif // PATIENT_DETAILS_H
