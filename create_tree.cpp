#include "create_tree.h"
#include "ui_create_tree.h"
#include"menu.h"

create_tree::create_tree(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::create_tree)
{
    ui->setupUi(this);
}

create_tree::~create_tree()
{
    delete ui;
}

void create_tree::on_pushButton_3_clicked()
{
    wind1= new menu (this) ;
    wind1->show();
}

