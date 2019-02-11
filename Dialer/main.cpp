#include "dialer.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialer w;
    w.show();

    return a.exec();
}
