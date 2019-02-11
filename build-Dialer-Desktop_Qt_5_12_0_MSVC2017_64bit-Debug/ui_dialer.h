/********************************************************************************
** Form generated from reading UI file 'dialer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALER_H
#define UI_DIALER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialer
{
public:
    QAction *actionOpen_Adress_Book;
    QAction *actionExit;
    QWidget *centralWidget;
    QTableView *tableView;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menuTools;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Dialer)
    {
        if (Dialer->objectName().isEmpty())
            Dialer->setObjectName(QString::fromUtf8("Dialer"));
        Dialer->resize(625, 391);
        actionOpen_Adress_Book = new QAction(Dialer);
        actionOpen_Adress_Book->setObjectName(QString::fromUtf8("actionOpen_Adress_Book"));
        actionExit = new QAction(Dialer);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralWidget = new QWidget(Dialer);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(320, 0, 301, 331));
        tableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 20, 191, 31));
        Dialer->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Dialer);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 625, 20));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        Dialer->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Dialer);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Dialer->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Dialer);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Dialer->setStatusBar(statusBar);

        menuBar->addAction(menuTools->menuAction());
        menuTools->addAction(actionOpen_Adress_Book);
        menuTools->addSeparator();
        menuTools->addAction(actionExit);

        retranslateUi(Dialer);

        QMetaObject::connectSlotsByName(Dialer);
    } // setupUi

    void retranslateUi(QMainWindow *Dialer)
    {
        Dialer->setWindowTitle(QApplication::translate("Dialer", "Dialer", nullptr));
        actionOpen_Adress_Book->setText(QApplication::translate("Dialer", "Open Adress Book", nullptr));
        actionExit->setText(QApplication::translate("Dialer", "Exit", nullptr));
        label->setText(QApplication::translate("Dialer", "TextLabel", nullptr));
        menuTools->setTitle(QApplication::translate("Dialer", "Tools", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialer: public Ui_Dialer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALER_H
