#ifndef BACKUP_H
#define BACKUP_H
#include<iostream>
#include<fstream>
#include<string.h>
#include<windows.h>
#include<QStandardPaths>
#include<QMessageBox>
#include<doctor.h>
#include<patient.h>
#include<patient_details.h>
#include<billing.h>
#include<appointment.h>
using namespace std;
class Backup
{
public:
    Backup();
    void Doctor_Backup();
    void Patient_Backup();
    void Patient_Details_Backup();
    void Billing_Backup();
    void Appointment_Backup();
    void Doctor_Restore();
    void Patient_Restore();
    void Patient_Details_Restore();
    void Billing_Restore();
    void Appointment_Restore();
};

#endif // BACKUP_H
