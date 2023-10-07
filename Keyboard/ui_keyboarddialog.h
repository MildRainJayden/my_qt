/********************************************************************************
** Form generated from reading UI file 'keyboarddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYBOARDDIALOG_H
#define UI_KEYBOARDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_KeyboardDialog
{
public:
    QLabel *label;

    void setupUi(QDialog *KeyboardDialog)
    {
        if (KeyboardDialog->objectName().isEmpty())
            KeyboardDialog->setObjectName(QStringLiteral("KeyboardDialog"));
        KeyboardDialog->resize(568, 418);
        label = new QLabel(KeyboardDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 140, 151, 141));
        label->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Plain);

        retranslateUi(KeyboardDialog);

        QMetaObject::connectSlotsByName(KeyboardDialog);
    } // setupUi

    void retranslateUi(QDialog *KeyboardDialog)
    {
        KeyboardDialog->setWindowTitle(QApplication::translate("KeyboardDialog", "KeyboardDialog", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class KeyboardDialog: public Ui_KeyboardDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYBOARDDIALOG_H
