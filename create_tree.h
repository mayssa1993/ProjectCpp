#ifndef CREATE_TREE_H
#define CREATE_TREE_H
#include "menu.h"
#include <QDialog>
#include <iostream>
#include <cstdlib>

namespace Ui {
class create_tree;
}

class create_tree : public QDialog
{
    Q_OBJECT

public:
    explicit create_tree(QWidget *parent = 0);
    ~create_tree();


private slots:
    void on_pushButton_3_clicked();

private:
    Ui::create_tree *ui;
    menu*wind1 ;

};

#endif // CREATE_TREE_H
