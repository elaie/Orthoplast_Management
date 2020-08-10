#include<string.h>
#include<fstream>
#include<iostream>
#include<QDebug>
#include <QStandardPaths>
int GetNum();
void PutNum(int S);
void LoC(char *L);
using namespace std;
#ifndef DOCTOR_H
#define DOCTOR_H
void AddData(char *N,char *A,char *S,char *P,char *E);

class Doctor
{
public:
    Doctor(Doctor &D);
    char NAME[60];
    char ADD[50];
    char SPEC[50];
    char PHNO[15];
    char EMAIL[60];
    void GetData(char *N,char *A,char *S,char *P,char *E);
    void CopyData(char *N,char *A,char *S,char *P,char *E);
    Doctor();
};

#endif // DOCTOR_H
