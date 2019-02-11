#include "dialer.h"
#include "ui_dialer.h"

#include <QFileDialog>
#include <iostream>

Dialer::Dialer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Dialer),
    myModel(new MyAdressBookModel(this))

{
    ui->setupUi(this);
    ui->tableView->setModel(myModel);

}

Dialer::~Dialer()
{
    delete ui;
}

void Dialer::on_actionOpen_Adress_Book_triggered()
{
    QString fileName= QFileDialog::getOpenFileName(this,
          tr("Open Adress Book"), "",
          tr("Adress Book (*.csv);; All Files(*)"));

    std::cout<<
}

void Dialer::on_actionExit_triggered()
{

}
