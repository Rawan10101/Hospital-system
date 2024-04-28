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

private:
    Ui::LoginPatient *ui;
};

#endif // LOGINPATIENT_H
