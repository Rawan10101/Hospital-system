#ifndef SCHEDULEPATIENT_H
#define SCHEDULEPATIENT_H

#include <QDialog>

namespace Ui {
class schedulePatient;
}

class schedulePatient : public QDialog
{
    Q_OBJECT

public:
    explicit schedulePatient(QWidget *parent = nullptr);
    ~schedulePatient();

private:
    Ui::schedulePatient *ui;
};

#endif // SCHEDULEPATIENT_H
