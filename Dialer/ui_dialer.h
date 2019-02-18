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
#include <QtWidgets/QButtonGroup>
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
    QPushButton *keypad0;
    QPushButton *keypad1;
    QPushButton *keypad3;
    QPushButton *keypad6;
    QPushButton *keypad7;
    QPushButton *keypad2;
    QPushButton *keypad9;
    QPushButton *keypad8;
    QPushButton *keypadStar;
    QPushButton *keypadPound;
    QPushButton *keypad5;
    QPushButton *keaypad4;
    QPushButton *callButton;
    QPushButton *backButton;
    QMenuBar *menuBar;
    QMenu *menuTools;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QButtonGroup *keypadButtons;

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
        tableView->setGeometry(QRect(290, 0, 331, 331));
        tableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView->verticalHeader()->setVisible(false);
        dialerScreen = new QLabel(centralWidget);
        dialerScreen->setObjectName(QString::fromUtf8("dialerScreen"));
        dialerScreen->setGeometry(QRect(40, 50, 161, 31));
        dialerScreen->setFrameShape(QFrame::WinPanel);
        dialerScreen->setAlignment(Qt::AlignCenter);
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(40, 120, 211, 202));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        keypad0 = new QPushButton(gridLayoutWidget);
        keypadButtons = new QButtonGroup(Dialer);
        keypadButtons->setObjectName(QString::fromUtf8("keypadButtons"));
        keypadButtons->addButton(keypad0);
        keypad0->setObjectName(QString::fromUtf8("keypad0"));
        keypad0->setMinimumSize(QSize(40, 40));
        keypad0->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(keypad0, 3, 1, 1, 1);

        keypad1 = new QPushButton(gridLayoutWidget);
        keypadButtons->addButton(keypad1);
        keypad1->setObjectName(QString::fromUtf8("keypad1"));
        keypad1->setMinimumSize(QSize(40, 40));
        keypad1->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(keypad1, 0, 0, 1, 1);

        keypad3 = new QPushButton(gridLayoutWidget);
        keypadButtons->addButton(keypad3);
        keypad3->setObjectName(QString::fromUtf8("keypad3"));
        keypad3->setMinimumSize(QSize(40, 40));
        keypad3->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(keypad3, 0, 2, 1, 1);

        keypad6 = new QPushButton(gridLayoutWidget);
        keypadButtons->addButton(keypad6);
        keypad6->setObjectName(QString::fromUtf8("keypad6"));
        keypad6->setMinimumSize(QSize(40, 40));
        keypad6->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(keypad6, 1, 2, 1, 1);

        keypad7 = new QPushButton(gridLayoutWidget);
        keypadButtons->addButton(keypad7);
        keypad7->setObjectName(QString::fromUtf8("keypad7"));
        keypad7->setMinimumSize(QSize(40, 40));
        keypad7->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(keypad7, 2, 0, 1, 1);

        keypad2 = new QPushButton(gridLayoutWidget);
        keypadButtons->addButton(keypad2);
        keypad2->setObjectName(QString::fromUtf8("keypad2"));
        keypad2->setMinimumSize(QSize(40, 40));
        keypad2->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(keypad2, 0, 1, 1, 1);

        keypad9 = new QPushButton(gridLayoutWidget);
        keypadButtons->addButton(keypad9);
        keypad9->setObjectName(QString::fromUtf8("keypad9"));
        keypad9->setMinimumSize(QSize(40, 40));
        keypad9->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(keypad9, 2, 2, 1, 1);

        keypad8 = new QPushButton(gridLayoutWidget);
        keypadButtons->addButton(keypad8);
        keypad8->setObjectName(QString::fromUtf8("keypad8"));
        keypad8->setMinimumSize(QSize(40, 40));
        keypad8->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(keypad8, 2, 1, 1, 1);

        keypadStar = new QPushButton(gridLayoutWidget);
        keypadButtons->addButton(keypadStar);
        keypadStar->setObjectName(QString::fromUtf8("keypadStar"));
        keypadStar->setMinimumSize(QSize(40, 40));
        keypadStar->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(keypadStar, 3, 0, 1, 1);

        keypadPound = new QPushButton(gridLayoutWidget);
        keypadButtons->addButton(keypadPound);
        keypadPound->setObjectName(QString::fromUtf8("keypadPound"));
        keypadPound->setMinimumSize(QSize(40, 40));
        keypadPound->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(keypadPound, 3, 2, 1, 1);

        keypad5 = new QPushButton(gridLayoutWidget);
        keypadButtons->addButton(keypad5);
        keypad5->setObjectName(QString::fromUtf8("keypad5"));
        keypad5->setMinimumSize(QSize(40, 40));
        keypad5->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(keypad5, 1, 1, 1, 1);

        keaypad4 = new QPushButton(gridLayoutWidget);
        keypadButtons->addButton(keaypad4);
        keaypad4->setObjectName(QString::fromUtf8("keaypad4"));
        keaypad4->setMinimumSize(QSize(40, 40));
        keaypad4->setMaximumSize(QSize(60, 60));
        keaypad4->setFlat(false);

        gridLayout->addWidget(keaypad4, 1, 0, 1, 1);

        callButton = new QPushButton(gridLayoutWidget);
        callButton->setObjectName(QString::fromUtf8("callButton"));
        callButton->setMinimumSize(QSize(40, 40));
        callButton->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(callButton, 4, 1, 1, 1);

        backButton = new QPushButton(centralWidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(210, 50, 41, 31));
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
        dialerScreen->setText(QString());
        keypad0->setText(QApplication::translate("Dialer", "0\n"
"+", nullptr));
        keypad1->setText(QApplication::translate("Dialer", "1", nullptr));
        keypad3->setText(QApplication::translate("Dialer", "3\n"
"DEF", nullptr));
        keypad6->setText(QApplication::translate("Dialer", "6\n"
"MNO", nullptr));
        keypad7->setText(QApplication::translate("Dialer", "7\n"
"PQRS", nullptr));
        keypad2->setText(QApplication::translate("Dialer", "2\n"
"ABC", nullptr));
        keypad9->setText(QApplication::translate("Dialer", "9\n"
"WXYZ", nullptr));
        keypad8->setText(QApplication::translate("Dialer", "8\n"
"TUV", nullptr));
        keypadStar->setText(QApplication::translate("Dialer", "*", nullptr));
        keypadPound->setText(QApplication::translate("Dialer", "#", nullptr));
        keypad5->setText(QApplication::translate("Dialer", "5\n"
"JKL", nullptr));
        keaypad4->setText(QApplication::translate("Dialer", "4\n"
"GHI", nullptr));
        callButton->setText(QApplication::translate("Dialer", "Call", nullptr));
        backButton->setText(QString());
        menuTools->setTitle(QApplication::translate("Dialer", "Tools", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialer: public Ui_Dialer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALER_H
