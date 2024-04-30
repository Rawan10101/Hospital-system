#ifndef HEALTHCARE_H
#define HEALTHCARE_H

#include <QDialog>

namespace Ui {
class healthCare;
}

class healthCare : public QDialog
{
    Q_OBJECT

public:
    explicit healthCare(QWidget *parent = nullptr);
    ~healthCare();

private:
    Ui::healthCare *ui;
};

#endif // HEALTHCARE_H
