#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"registration.h"
#include "QFile"
#include"QMessageBox"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QFile file("C:/Users/HP/Desktop/CS2 Lab Project/File CS2Lab.txt");
    if (!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::information(this, "Error", "Failed to open file: File.txt");
        return;
    }

    QTextStream out(&file);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    hide();
    Registration* register1= new Registration();
    register1->show();

}

