/********************************************************************************
** Form generated from reading UI file 'txrow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TXROW_H
#define UI_TXROW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/pivx/privatelabel.h"

QT_BEGIN_NAMESPACE

class Ui_TxRow
{
public:
    QVBoxLayout *verticalLayout_3;
    QWidget *rowContainer;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *icon;
    QVBoxLayout *verticalLayout;
    PrivateQLabel *lblAddress;
    PrivateQLabel *lblDate;
    PrivateQLabel *lblAmount;
    QLabel *lblDivisory;

    void setupUi(QWidget *TxRow)
    {
        if (TxRow->objectName().isEmpty())
            TxRow->setObjectName(QStringLiteral("TxRow"));
        TxRow->resize(601, 70);
        TxRow->setMinimumSize(QSize(0, 40));
        verticalLayout_3 = new QVBoxLayout(TxRow);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        rowContainer = new QWidget(TxRow);
        rowContainer->setObjectName(QStringLiteral("rowContainer"));
        verticalLayout_2 = new QVBoxLayout(rowContainer);
        verticalLayout_2->setSpacing(9);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(20, 9, 20, 0);
        frame = new QFrame(rowContainer);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QStringLiteral("border:none;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        icon = new QPushButton(frame);
        icon->setObjectName(QStringLiteral("icon"));
        icon->setFocusPolicy(Qt::NoFocus);
        icon->setStyleSheet(QStringLiteral("border:none;"));
        icon->setIconSize(QSize(28, 28));

        horizontalLayout->addWidget(icon);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(9, -1, -1, -1);
        lblAddress = new PrivateQLabel(frame);
        lblAddress->setObjectName(QStringLiteral("lblAddress"));
        lblAddress->setStyleSheet(QStringLiteral(""));
        lblAddress->setText(QStringLiteral("N/A"));
        lblAddress->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout->addWidget(lblAddress);

        lblDate = new PrivateQLabel(frame);
        lblDate->setObjectName(QStringLiteral("lblDate"));
        lblDate->setStyleSheet(QStringLiteral(""));
        lblDate->setText(QStringLiteral("N/A"));
        lblDate->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout->addWidget(lblDate);


        horizontalLayout->addLayout(verticalLayout);

        lblAmount = new PrivateQLabel(frame);
        lblAmount->setObjectName(QStringLiteral("lblAmount"));
        lblAmount->setStyleSheet(QStringLiteral(""));
        lblAmount->setText(QStringLiteral("N/A"));

        horizontalLayout->addWidget(lblAmount);

        horizontalLayout->setStretch(1, 2);

        verticalLayout_2->addWidget(frame);

        lblDivisory = new QLabel(rowContainer);
        lblDivisory->setObjectName(QStringLiteral("lblDivisory"));
        lblDivisory->setMinimumSize(QSize(0, 1));
        lblDivisory->setMaximumSize(QSize(16777215, 1));
        lblDivisory->setStyleSheet(QStringLiteral("background-color:#bababa;"));
        lblDivisory->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout_2->addWidget(lblDivisory);


        verticalLayout_3->addWidget(rowContainer);


        retranslateUi(TxRow);

        QMetaObject::connectSlotsByName(TxRow);
    } // setupUi

    void retranslateUi(QWidget *TxRow)
    {
        TxRow->setWindowTitle(QApplication::translate("TxRow", "Form", Q_NULLPTR));
        icon->setText(QString());
        lblDivisory->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TxRow: public Ui_TxRow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TXROW_H
