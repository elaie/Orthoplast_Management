#ifndef BILLING_H
#define BILLING_H

#include<string.h>
#include<fstream>
#include<iostream>
#include<QDebug>
#include <QStandardPaths>
#include<QDate>
int GetNumB(char *n);
void PutNumB(int S,char *n);
void LoC6(char *L);
void LoC6(char *L,char *n);
using namespace std;
void AddDataB(char *N,float B,float R,float Q,float Di,float E,float T,char *D,char *NA,float RM);

class Billing
{
public:
    char Name[60];
    float Bill_No;
    float Rate;
    float QTY;
    float Discount;
    float Extra;
    float Total;
    float Remain;
    char Date[15];
    void GetDataB(char *N,float B,float R,float Q,float Di,float E,float T,char *D,float RM);
    void CopyDataB(char *N,float &B,float &R,float &Q,float &Di,float &E,float &T,char *D,float RM);
    Billing();
    Billing(Billing &D);
};


#endif // BILLING_H
