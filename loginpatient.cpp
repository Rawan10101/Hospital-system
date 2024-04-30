#include "loginpatient.h"
#include "ui_loginpatient.h"

LoginPatient::LoginPatient(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoginPatient)
{
    ui->setupUi(this);
}

LoginPatient::~LoginPatient()
{
    delete ui;
}

void LoginPatient::on_pushButton_clicked()
{

}





void LoginPatient::on_medicalRecord_clicked()
{

}

