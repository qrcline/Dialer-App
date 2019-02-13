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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
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
    QLabel *dialerScreen;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_7;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_13;
    QPushButton *pushButton_4;
    QPushButton *pushButton_12;
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
        dialerScreen = new QLabel(centralWidget);
        dialerScreen->setObjectName(QString::fromUtf8("dialerScreen"));
        dialerScreen->setGeometry(QRect(60, 50, 191, 31));
        dialerScreen->setFrameShape(QFrame::WinPanel);
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 120, 292, 191));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setHorizontalSpacing(25);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_7 = new QPushButton(gridLayoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout->addWidget(pushButton_7, 2, 1, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 1, 0, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout->addWidget(pushButton_6, 1, 1, 1, 1);

        pushButton_9 = new QPushButton(gridLayoutWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        gridLayout->addWidget(pushButton_9, 0, 2, 1, 1);

        pushButton_8 = new QPushButton(gridLayoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout->addWidget(pushButton_8, 3, 1, 1, 1);

        pushButton_10 = new QPushButton(gridLayoutWidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        gridLayout->addWidget(pushButton_10, 1, 2, 1, 1);

        pushButton_11 = new QPushButton(gridLayoutWidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

        gridLayout->addWidget(pushButton_11, 2, 2, 1, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 3, 0, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_13 = new QPushButton(gridLayoutWidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));

        gridLayout->addWidget(pushButton_13, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 2, 0, 1, 1);

        pushButton_12 = new QPushButton(gridLayoutWidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

        gridLayout->addWidget(pushButton_12, 3, 2, 1, 1);

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
        dialerScreen->setText(QApplication::translate("Dialer", "gjhk", nullptr));
        pushButton_7->setText(QApplication::translate("Dialer", "PushButton", nullptr));
        pushButton_3->setText(QApplication::translate("Dialer", "PushButton", nullptr));
        pushButton_6->setText(QApplication::translate("Dialer", "PushButton", nullptr));
        pushButton_9->setText(QApplication::translate("Dialer", "PushButton", nullptr));
        pushButton_8->setText(QApplication::translate("Dialer", "PushButton", nullptr));
        pushButton_10->setText(QApplication::translate("Dialer", "PushButton", nullptr));
        pushButton_11->setText(QApplication::translate("Dialer", "PushButton", nullptr));
        pushButton_5->setText(QApplication::translate("Dialer", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("Dialer", "PushButton", nullptr));
        pushButton_13->setText(QApplication::translate("Dialer", "PushButton", nullptr));
        pushButton_4->setText(QApplication::translate("Dialer", "PushButton", nullptr));
        pushButton_12->setText(QApplication::translate("Dialer", "PushButton", nullptr));
        menuTools->setTitle(QApplication::translate("Dialer", "Tools", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialer: public Ui_Dialer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALER_H
