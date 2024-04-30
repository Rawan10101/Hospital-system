#include "healthcare.h"
#include "ui_healthcare.h"

healthCare::healthCare(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::healthCare)
{
    ui->setupUi(this);
}

healthCare::~healthCare()
{
    delete ui;
}
