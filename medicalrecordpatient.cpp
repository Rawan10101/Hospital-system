#include "medicalrecordpatient.h"
#include "ui_medicalrecordpatient.h"

medicalRecordPatient::medicalRecordPatient(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::medicalRecordPatient)
{
    ui->setupUi(this);
}

medicalRecordPatient::~medicalRecordPatient()
{
    delete ui;
}
