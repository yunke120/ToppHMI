/********************************************************************************
** Form generated from reading UI file 'cameraui.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERAUI_H
#define UI_CAMERAUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_CameraUI
{
public:

    void setupUi(QDialog *CameraUI)
    {
        if (CameraUI->objectName().isEmpty())
            CameraUI->setObjectName(QStringLiteral("CameraUI"));
        CameraUI->resize(400, 300);

        retranslateUi(CameraUI);

        QMetaObject::connectSlotsByName(CameraUI);
    } // setupUi

    void retranslateUi(QDialog *CameraUI)
    {
        CameraUI->setWindowTitle(QApplication::translate("CameraUI", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CameraUI: public Ui_CameraUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERAUI_H
