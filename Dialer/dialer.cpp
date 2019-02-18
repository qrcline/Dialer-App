#include "dialer.h"
#include "ui_dialer.h"
#include <QFileDialog>
#include <iostream>
#include <QMessageBox>

Dialer::Dialer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Dialer),
    myModel(new MyAdressBookModel(this))

{
    ui->setupUi(this);
    ui->tableView->setModel(myModel);
    ui->backButton->setStyleSheet("border-image:url(:/backspace-delete-action-button-512.png)");


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

    std::cout<<fileName.toStdString()<<std::endl;
    myModel->openFile(fileName);
}

void Dialer::on_actionExit_triggered()
{
    //Closes app
    QApplication::quit();
}

void Dialer::on_tableView_clicked(const QModelIndex &index)
{
    myModel->setNumber(myModel->getPhoneNumber(index.row()));
    ui->dialerScreen->setText(myModel->updateNumber(-2));
}

void Dialer::on_backButton_clicked()
{
updateScreen(-1);
}

//Keypad buttons
void Dialer::on_keypad1_clicked()
{
    updateScreen(1);
}

void Dialer::on_keypad2_clicked()
{
     updateScreen(2);
}

void Dialer::on_keypad3_clicked()
{
    updateScreen(3);
}

void Dialer::on_keaypad4_clicked()
{
    updateScreen(4);
}

void Dialer::on_keypad5_clicked()
{
    updateScreen(5);
}

void Dialer::on_keypad6_clicked()
{
    updateScreen(6);
}

void Dialer::on_keypad7_clicked()
{
    updateScreen(7);
}

void Dialer::on_keypad8_clicked()
{
    updateScreen(8);
}

void Dialer::on_keypad9_clicked()
{
    updateScreen(9);
}

void Dialer::on_keypad0_clicked()
{
    updateScreen(0);
}

void Dialer::on_callButton_clicked()
{
    QMessageBox msgBox;
    QString message="Calling: ";
    message.append(ui->dialerScreen->text());
        msgBox.setText(message);
        msgBox.exec();
    ui->dialerScreen->setText("");
}

void Dialer::updateScreen(int button)
{


   ui->dialerScreen->setText(myModel->updateNumber(button));

}
