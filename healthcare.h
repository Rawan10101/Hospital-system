#ifndef HEALTHCARE_H
#define HEALTHCARE_H

#include <QDialog>

namespace Ui {
class Healthcare;
}

class Healthcare : public QDialog
{
    Q_OBJECT

public:
    Healthcare(QString name = QString(), QString specialization = QString());
    ~Healthcare();
    void sendMessage(QString patientName, QString message);

private:
    Ui::Healthcare *ui;
    QString name1;
    QString specialization1;
};

#endif // HEALTHCARE_H
