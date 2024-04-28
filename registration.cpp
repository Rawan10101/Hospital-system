#include "registration.h"
#include "ui_registration.h"
#include "loginpatient.h" // Include the header file for the LoginPatient class

Registration::Registration(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Registration)
{
    ui->setupUi(this);
}

Registration::~Registration()
{
    delete ui;
}

void Registration::on_Patient_clicked()
{}

void Registration::on_pushButton_clicked()
{

    if (ui->Patient->isChecked()) {
        hide();
        LoginPatient* loginPatient = new LoginPatient(this);
        loginPatient->show();
    }

}



