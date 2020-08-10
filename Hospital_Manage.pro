QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS
RC_ICONS = myappico.ico
# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    add_app_dialog.cpp \
    add_bill_dialog.cpp \
    add_pdetails_dialog.cpp \
    adddocdialog.cpp \
    addpatdialog.cpp \
    all_bill_dialog.cpp \
    appointment.cpp \
    backup.cpp \
    billing.cpp \
    dis_app_dialog.cpp \
    dis_bill_dialog.cpp \
    dis_pdetails_dialog.cpp \
    dis_total_bill_dialog.cpp \
    display_doc_dialog.cpp \
    display_pat_dialog.cpp \
    doctor.cpp \
    edit_bill_dialog.cpp \
    edit_pat_dialog.cpp \
    file_amount.cpp \
    main.cpp \
    mainwindow.cpp \
    new_bill_dialog.cpp \
    new_dis_bill_dialog.cpp \
    pat_indi_bill_dialog.cpp \
    patient.cpp \
    patient_details.cpp \
    patient_info_dialog.cpp

HEADERS += \
    add_app_dialog.h \
    add_bill_dialog.h \
    add_pdetails_dialog.h \
    adddocdialog.h \
    addpatdialog.h \
    all_bill_dialog.h \
    appointment.h \
    backup.h \
    billing.h \
    dis_app_dialog.h \
    dis_bill_dialog.h \
    dis_pdetails_dialog.h \
    dis_total_bill_dialog.h \
    display_doc_dialog.h \
    display_pat_dialog.h \
    doctor.h \
    edit_bill_dialog.h \
    edit_pat_dialog.h \
    file_amount.h \
    mainwindow.h \
    new_bill_dialog.h \
    new_dis_bill_dialog.h \
    pat_indi_bill_dialog.h \
    patient.h \
    patient_details.h \
    patient_info_dialog.h

FORMS += \
    add_app_dialog.ui \
    add_bill_dialog.ui \
    add_pdetails_dialog.ui \
    adddocdialog.ui \
    addpatdialog.ui \
    all_bill_dialog.ui \
    dis_app_dialog.ui \
    dis_bill_dialog.ui \
    dis_pdetails_dialog.ui \
    dis_total_bill_dialog.ui \
    display_doc_dialog.ui \
    display_pat_dialog.ui \
    edit_bill_dialog.ui \
    edit_pat_dialog.ui \
    mainwindow.ui \
    new_bill_dialog.ui \
    new_dis_bill_dialog.ui \
    pat_indi_bill_dialog.ui \
    patient_info_dialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Pictures.qrc
    myapp.rc
