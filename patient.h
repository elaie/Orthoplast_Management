#ifndef PATIENT_H
#define PATIENT_H
#include<string.h>
#include<fstream>
#include<iostream>
#include<QDebug>
#include<QStandardPaths>
int GetNumP();
void PutNumP(int S);
using namespace std;
void AddDataP(char *N,char *A,char *DO,char *P,char *E,char *G,char *BG,char *ref);
void LoC2(char *s);
class Patient
{
public:
    char NAME[60];
    char ADD[50];
    char DOB[15];
    char PHNO[15];
    char EMAIL[60];
    char GEN[8];
    char BLOOD_G[5];
    char REF[60];
    void GetData(char *N,char *A,char *DO,char *P,char *E,char *G,char *BG,char *ref);
    void CopyData(char *N,char *A,char *DO,char *P,char *E,char *G,char *BG,char *ref);
    Patient();
    Patient(Patient &D);
};

#endif // PATIENT_H
