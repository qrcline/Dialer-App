#ifndef DIALER_H
#define DIALER_H

#include <QMainWindow>
#include "myadressbookmodel.h"

namespace Ui {
class Dialer;
}

class Dialer : public QMainWindow
{
    Q_OBJECT

public:
    explicit Dialer(QWidget *parent = nullptr);
    ~Dialer();

private slots:
    void on_actionOpen_Adress_Book_triggered();
    void on_actionExit_triggered();



    void on_tableView_clicked(const QModelIndex &index);

    void on_backButton_clicked();

    void on_keypad1_clicked();

    void on_keypad2_clicked();

    void on_keypad3_clicked();

    void on_keaypad4_clicked();

    void on_keypad5_clicked();

    void on_keypad6_clicked();

    void on_keypad7_clicked();

    void on_keypad8_clicked();

    void on_keypad9_clicked();



    void on_keypad0_clicked();

    void on_callButton_clicked();
    void updateScreen(int);


private:
    Ui::Dialer *ui;
    MyAdressBookModel *myModel;
};

#endif // DIALER_H
