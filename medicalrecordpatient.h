#ifndef MEDICALRECORDPATIENT_H
#define MEDICALRECORDPATIENT_H

#include <QDialog>

namespace Ui {
class medicalRecordPatient;
}

class medicalRecordPatient : public QDialog
{
    Q_OBJECT

public:
    explicit medicalRecordPatient(QWidget *parent = nullptr);
    ~medicalRecordPatient();

private:
    Ui::medicalRecordPatient *ui;
};

#endif // MEDICALRECORDPATIENT_H
