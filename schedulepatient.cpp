#include "schedulepatient.h"
#include "ui_schedulepatient.h"

schedulePatient::schedulePatient(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::schedulePatient)
{
    ui->setupUi(this);
}

schedulePatient::~schedulePatient()
{
    delete ui;
}
