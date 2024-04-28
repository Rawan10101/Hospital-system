#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"registration.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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

