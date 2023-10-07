/********************************************************************************
** Form generated from reading UI file 'mousedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOUSEDIALOG_H
#define UI_MOUSEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_MouseDialog
{
public:
    QLabel *label;

    void setupUi(QDialog *MouseDialog)
    {
        if (MouseDialog->objectName().isEmpty())
            MouseDialog->setObjectName(QStringLiteral("MouseDialog"));
        MouseDialog->resize(520, 432);
        label = new QLabel(MouseDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 90, 141, 131));
        label->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 33, 255);"));
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Sunken);

        retranslateUi(MouseDialog);

        QMetaObject::connectSlotsByName(MouseDialog);
    } // setupUi

    void retranslateUi(QDialog *MouseDialog)
    {
        MouseDialog->setWindowTitle(QApplication::translate("MouseDialog", "MouseDialog", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MouseDialog: public Ui_MouseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOUSEDIALOG_H
