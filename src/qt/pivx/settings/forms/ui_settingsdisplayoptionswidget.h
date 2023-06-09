/********************************************************************************
** Form generated from reading UI file 'settingsdisplayoptionswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDISPLAYOPTIONSWIDGET_H
#define UI_SETTINGSDISPLAYOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qvaluecombobox.h"

QT_BEGIN_NAMESPACE

class Ui_SettingsDisplayOptionsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *left;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayoutTitle;
    QLabel *labelTitle;
    QLabel *labelSubtitle1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelTitleLanguage;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *comboBoxLanguage;
    QHBoxLayout *hboxLayout;
    QLabel *labelTitleUnit;
    QSpacerItem *spacerItem;
    QValueComboBox *comboBoxUnit;
    QHBoxLayout *hboxLayout1;
    QLabel *labelTitleDigits;
    QSpacerItem *spacerItem1;
    QComboBox *comboBoxDigits;
    QHBoxLayout *horizontalHideCharts;
    QCheckBox *checkBoxHideCharts;
    QPushButton *pushButtonSwitchBalance;
    QHBoxLayout *horizontalLayout;
    QLabel *labelTitleUrl;
    QLineEdit *lineEditUrl;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalReset;
    QPushButton *pushButtonReset;
    QPushButton *pushButtonClean;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButtonSave;

    void setupUi(QWidget *SettingsDisplayOptionsWidget)
    {
        if (SettingsDisplayOptionsWidget->objectName().isEmpty())
            SettingsDisplayOptionsWidget->setObjectName(QStringLiteral("SettingsDisplayOptionsWidget"));
        SettingsDisplayOptionsWidget->resize(518, 440);
        verticalLayout = new QVBoxLayout(SettingsDisplayOptionsWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        left = new QWidget(SettingsDisplayOptionsWidget);
        left->setObjectName(QStringLiteral("left"));
        verticalLayout_3 = new QVBoxLayout(left);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(20);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayoutTitle = new QVBoxLayout();
        verticalLayoutTitle->setSpacing(5);
        verticalLayoutTitle->setObjectName(QStringLiteral("verticalLayoutTitle"));
        labelTitle = new QLabel(left);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));

        verticalLayoutTitle->addWidget(labelTitle);

        labelSubtitle1 = new QLabel(left);
        labelSubtitle1->setObjectName(QStringLiteral("labelSubtitle1"));
        labelSubtitle1->setWordWrap(true);

        verticalLayoutTitle->addWidget(labelSubtitle1);


        horizontalLayout_3->addLayout(verticalLayoutTitle);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelTitleLanguage = new QLabel(left);
        labelTitleLanguage->setObjectName(QStringLiteral("labelTitleLanguage"));

        horizontalLayout_2->addWidget(labelTitleLanguage);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        comboBoxLanguage = new QComboBox(left);
        comboBoxLanguage->setObjectName(QStringLiteral("comboBoxLanguage"));
        comboBoxLanguage->setMinimumSize(QSize(380, 0));
        comboBoxLanguage->setMaximumSize(QSize(280, 16777215));

        horizontalLayout_2->addWidget(comboBoxLanguage);


        verticalLayout_2->addLayout(horizontalLayout_2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        labelTitleUnit = new QLabel(left);
        labelTitleUnit->setObjectName(QStringLiteral("labelTitleUnit"));

        hboxLayout->addWidget(labelTitleUnit);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        comboBoxUnit = new QValueComboBox(left);
        comboBoxUnit->setObjectName(QStringLiteral("comboBoxUnit"));
        comboBoxUnit->setMinimumSize(QSize(180, 0));
        comboBoxUnit->setMaximumSize(QSize(180, 16777215));

        hboxLayout->addWidget(comboBoxUnit);


        verticalLayout_2->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        labelTitleDigits = new QLabel(left);
        labelTitleDigits->setObjectName(QStringLiteral("labelTitleDigits"));

        hboxLayout1->addWidget(labelTitleDigits);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        comboBoxDigits = new QComboBox(left);
        comboBoxDigits->setObjectName(QStringLiteral("comboBoxDigits"));
        comboBoxDigits->setMinimumSize(QSize(180, 0));
        comboBoxDigits->setMaximumSize(QSize(180, 16777215));

        hboxLayout1->addWidget(comboBoxDigits);


        verticalLayout_2->addLayout(hboxLayout1);

        horizontalHideCharts = new QHBoxLayout();
        horizontalHideCharts->setObjectName(QStringLiteral("horizontalHideCharts"));
        checkBoxHideCharts = new QCheckBox(left);
        checkBoxHideCharts->setObjectName(QStringLiteral("checkBoxHideCharts"));

        horizontalHideCharts->addWidget(checkBoxHideCharts);


        verticalLayout_2->addLayout(horizontalHideCharts);

        pushButtonSwitchBalance = new QPushButton(left);
        pushButtonSwitchBalance->setObjectName(QStringLiteral("pushButtonSwitchBalance"));
        pushButtonSwitchBalance->setMinimumSize(QSize(0, 30));
        pushButtonSwitchBalance->setFocusPolicy(Qt::NoFocus);
        pushButtonSwitchBalance->setCheckable(true);

        verticalLayout_2->addWidget(pushButtonSwitchBalance);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelTitleUrl = new QLabel(left);
        labelTitleUrl->setObjectName(QStringLiteral("labelTitleUrl"));

        horizontalLayout->addWidget(labelTitleUrl);

        lineEditUrl = new QLineEdit(left);
        lineEditUrl->setObjectName(QStringLiteral("lineEditUrl"));
        lineEditUrl->setMinimumSize(QSize(0, 50));
        lineEditUrl->setMaximumSize(QSize(16777215, 50));

        horizontalLayout->addWidget(lineEditUrl);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalReset = new QHBoxLayout();
        horizontalReset->setSpacing(12);
        horizontalReset->setObjectName(QStringLiteral("horizontalReset"));
        pushButtonReset = new QPushButton(left);
        pushButtonReset->setObjectName(QStringLiteral("pushButtonReset"));
        pushButtonReset->setMinimumSize(QSize(160, 50));
        pushButtonReset->setMaximumSize(QSize(50, 16777215));
        pushButtonReset->setFocusPolicy(Qt::NoFocus);

        horizontalReset->addWidget(pushButtonReset);

        pushButtonClean = new QPushButton(left);
        pushButtonClean->setObjectName(QStringLiteral("pushButtonClean"));
        pushButtonClean->setMinimumSize(QSize(0, 50));
        pushButtonClean->setFocusPolicy(Qt::NoFocus);

        horizontalReset->addWidget(pushButtonClean);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalReset->addItem(horizontalSpacer_5);

        pushButtonSave = new QPushButton(left);
        pushButtonSave->setObjectName(QStringLiteral("pushButtonSave"));
        pushButtonSave->setMinimumSize(QSize(200, 50));
        pushButtonSave->setMaximumSize(QSize(200, 50));
        pushButtonSave->setFocusPolicy(Qt::NoFocus);

        horizontalReset->addWidget(pushButtonSave);


        verticalLayout_2->addLayout(horizontalReset);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout->addWidget(left);


        retranslateUi(SettingsDisplayOptionsWidget);

        QMetaObject::connectSlotsByName(SettingsDisplayOptionsWidget);
    } // setupUi

    void retranslateUi(QWidget *SettingsDisplayOptionsWidget)
    {
        SettingsDisplayOptionsWidget->setWindowTitle(QApplication::translate("SettingsDisplayOptionsWidget", "Form", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("SettingsDisplayOptionsWidget", "Display", Q_NULLPTR));
        labelSubtitle1->setText(QApplication::translate("SettingsDisplayOptionsWidget", "Customize the display view options", Q_NULLPTR));
        labelTitleLanguage->setText(QApplication::translate("SettingsDisplayOptionsWidget", "Language", Q_NULLPTR));
        labelTitleUnit->setText(QApplication::translate("SettingsDisplayOptionsWidget", "Unit to show amount", Q_NULLPTR));
        labelTitleDigits->setText(QApplication::translate("SettingsDisplayOptionsWidget", "Decimal digits", Q_NULLPTR));
        checkBoxHideCharts->setText(QApplication::translate("SettingsDisplayOptionsWidget", "Hide stake charts in the dashboard", Q_NULLPTR));
        pushButtonSwitchBalance->setText(QApplication::translate("SettingsDisplayOptionsWidget", "Hide empty balances", Q_NULLPTR));
        labelTitleUrl->setText(QApplication::translate("SettingsDisplayOptionsWidget", "Third party transactions URLs", Q_NULLPTR));
        pushButtonReset->setText(QApplication::translate("SettingsDisplayOptionsWidget", "Reset to default", Q_NULLPTR));
        pushButtonClean->setText(QApplication::translate("SettingsDisplayOptionsWidget", "Discard changes", Q_NULLPTR));
        pushButtonSave->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SettingsDisplayOptionsWidget: public Ui_SettingsDisplayOptionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDISPLAYOPTIONSWIDGET_H
