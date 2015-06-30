#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "create_tree.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
  wind= new create_tree (this) ;
  wind->show();
}
