#ifndef LOGINPATIENT_H
#define LOGINPATIENT_H

#include <QDialog>

namespace Ui {
class LoginPatient;
}

class LoginPatient : public QDialog
{
    Q_OBJECT

public:
    explicit LoginPatient(QWidget *parent = nullptr);
    ~LoginPatient();

private slots:
    void on_pushButton_clicked();
    void on_medicalRecord_clicked();

private:
    Ui::LoginPatient *ui;
};

#endif // LOGINPATIENT_H
