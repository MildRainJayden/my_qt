/********************************************************************************
** Form generated from reading UI file 'showimagedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWIMAGEDIALOG_H
#define UI_SHOWIMAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ShowImageDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_btnPrev;
    QPushButton *m_btnNext;

    void setupUi(QDialog *ShowImageDialog)
    {
        if (ShowImageDialog->objectName().isEmpty())
            ShowImageDialog->setObjectName(QStringLiteral("ShowImageDialog"));
        ShowImageDialog->resize(661, 420);
        QFont font;
        font.setPointSize(20);
        ShowImageDialog->setFont(font);
        verticalLayout = new QVBoxLayout(ShowImageDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame = new QFrame(ShowImageDialog);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFont(font);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_btnPrev = new QPushButton(ShowImageDialog);
        m_btnPrev->setObjectName(QStringLiteral("m_btnPrev"));

        horizontalLayout->addWidget(m_btnPrev);

        m_btnNext = new QPushButton(ShowImageDialog);
        m_btnNext->setObjectName(QStringLiteral("m_btnNext"));

        horizontalLayout->addWidget(m_btnNext);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ShowImageDialog);

        QMetaObject::connectSlotsByName(ShowImageDialog);
    } // setupUi

    void retranslateUi(QDialog *ShowImageDialog)
    {
        ShowImageDialog->setWindowTitle(QApplication::translate("ShowImageDialog", "\345\233\276\345\233\276\347\247\200", 0));
        m_btnPrev->setText(QApplication::translate("ShowImageDialog", "\344\270\212\344\270\200\345\274\240", 0));
        m_btnNext->setText(QApplication::translate("ShowImageDialog", "\344\270\213\344\270\200\345\274\240", 0));
    } // retranslateUi

};

namespace Ui {
    class ShowImageDialog: public Ui_ShowImageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWIMAGEDIALOG_H
