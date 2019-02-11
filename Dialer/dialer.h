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

private:
    Ui::Dialer *ui;
    MyAdressBookModel *myModel;
};

#endif // DIALER_H
