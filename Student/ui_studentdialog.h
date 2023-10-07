/********************************************************************************
** Form generated from reading UI file 'studentdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTDIALOG_H
#define UI_STUDENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StudentDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *valueComboBox;
    QComboBox *condComboBox;
    QPushButton *sortButton;
    QTableView *tableView;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *idEdit;
    QLabel *label_2;
    QLineEdit *nameEdit;
    QLabel *label_3;
    QLineEdit *scoreEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *insertButton;
    QPushButton *deleteButton;
    QPushButton *updateButton;

    void setupUi(QDialog *StudentDialog)
    {
        if (StudentDialog->objectName().isEmpty())
            StudentDialog->setObjectName(QStringLiteral("StudentDialog"));
        StudentDialog->resize(544, 514);
        QFont font;
        font.setPointSize(20);
        StudentDialog->setFont(font);
        verticalLayout = new QVBoxLayout(StudentDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        valueComboBox = new QComboBox(StudentDialog);
        valueComboBox->setObjectName(QStringLiteral("valueComboBox"));

        horizontalLayout->addWidget(valueComboBox);

        condComboBox = new QComboBox(StudentDialog);
        condComboBox->setObjectName(QStringLiteral("condComboBox"));

        horizontalLayout->addWidget(condComboBox);

        sortButton = new QPushButton(StudentDialog);
        sortButton->setObjectName(QStringLiteral("sortButton"));

        horizontalLayout->addWidget(sortButton);


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(StudentDialog);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(StudentDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        idEdit = new QLineEdit(StudentDialog);
        idEdit->setObjectName(QStringLiteral("idEdit"));

        gridLayout->addWidget(idEdit, 0, 1, 1, 1);

        label_2 = new QLabel(StudentDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        nameEdit = new QLineEdit(StudentDialog);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));

        gridLayout->addWidget(nameEdit, 1, 1, 1, 1);

        label_3 = new QLabel(StudentDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        scoreEdit = new QLineEdit(StudentDialog);
        scoreEdit->setObjectName(QStringLiteral("scoreEdit"));

        gridLayout->addWidget(scoreEdit, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        insertButton = new QPushButton(StudentDialog);
        insertButton->setObjectName(QStringLiteral("insertButton"));

        horizontalLayout_2->addWidget(insertButton);

        deleteButton = new QPushButton(StudentDialog);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));

        horizontalLayout_2->addWidget(deleteButton);

        updateButton = new QPushButton(StudentDialog);
        updateButton->setObjectName(QStringLiteral("updateButton"));

        horizontalLayout_2->addWidget(updateButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(StudentDialog);

        QMetaObject::connectSlotsByName(StudentDialog);
    } // setupUi

    void retranslateUi(QDialog *StudentDialog)
    {
        StudentDialog->setWindowTitle(QApplication::translate("StudentDialog", "\345\255\246\347\224\237\346\210\220\347\273\251\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        valueComboBox->clear();
        valueComboBox->insertItems(0, QStringList()
         << QApplication::translate("StudentDialog", "ID", 0)
         << QApplication::translate("StudentDialog", "SCORE", 0)
        );
        condComboBox->clear();
        condComboBox->insertItems(0, QStringList()
         << QApplication::translate("StudentDialog", "\345\215\207\345\272\217", 0)
         << QApplication::translate("StudentDialog", "\351\231\215\345\272\217", 0)
        );
        sortButton->setText(QApplication::translate("StudentDialog", "\346\216\222\345\272\217", 0));
        label->setText(QApplication::translate("StudentDialog", "\345\255\246\347\224\237\345\255\246\345\217\267:", 0));
        label_2->setText(QApplication::translate("StudentDialog", "\345\255\246\347\224\237\345\247\223\345\220\215:", 0));
        label_3->setText(QApplication::translate("StudentDialog", "\345\255\246\347\224\237\346\210\220\347\273\251:", 0));
        insertButton->setText(QApplication::translate("StudentDialog", "\346\217\222\345\205\245", 0));
        deleteButton->setText(QApplication::translate("StudentDialog", "\345\210\240\351\231\244", 0));
        updateButton->setText(QApplication::translate("StudentDialog", "\344\277\256\346\224\271", 0));
    } // retranslateUi

};

namespace Ui {
    class StudentDialog: public Ui_StudentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTDIALOG_H
