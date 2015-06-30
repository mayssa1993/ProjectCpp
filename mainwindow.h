#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "create_tree.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:


    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    create_tree* wind;

};

#endif // MAINWINDOW_H
