/********************************************************************************
** Form generated from reading UI file 'topphmi.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOPPHMI_H
#define UI_TOPPHMI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ToppHMI
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ToppHMI)
    {
        if (ToppHMI->objectName().isEmpty())
            ToppHMI->setObjectName(QStringLiteral("ToppHMI"));
        ToppHMI->resize(800, 600);
        centralwidget = new QWidget(ToppHMI);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        ToppHMI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ToppHMI);
        menubar->setObjectName(QStringLiteral("menubar"));
        ToppHMI->setMenuBar(menubar);
        statusbar = new QStatusBar(ToppHMI);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ToppHMI->setStatusBar(statusbar);

        retranslateUi(ToppHMI);

        QMetaObject::connectSlotsByName(ToppHMI);
    } // setupUi

    void retranslateUi(QMainWindow *ToppHMI)
    {
        ToppHMI->setWindowTitle(QApplication::translate("ToppHMI", "ToppHMI", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ToppHMI: public Ui_ToppHMI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOPPHMI_H
