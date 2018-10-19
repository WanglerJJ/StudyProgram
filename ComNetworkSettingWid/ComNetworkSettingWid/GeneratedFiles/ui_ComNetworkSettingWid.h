/********************************************************************************
** Form generated from reading UI file 'ComNetworkSettingWid.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMNETWORKSETTINGWID_H
#define UI_COMNETWORKSETTINGWID_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ComNetworkSettingWidClass
{
public:
    QGridLayout *gridLayout_3;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *ComEquipt_Layout;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QVBoxLayout *ComNet_Layout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *NetName_LineEdit;
    QPushButton *AddNetwork_PushButton;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *FreUpLimit_LineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *FreLowLimit_LineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *Fre_LineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *Power_LineEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QComboBox *WorkMode_ComboBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *HopSample_LineEdit;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *Ok_PushButton;
    QPushButton *Cancel_PushButton;
    QPushButton *Apply_PushButton;

    void setupUi(QWidget *ComNetworkSettingWidClass)
    {
        if (ComNetworkSettingWidClass->objectName().isEmpty())
            ComNetworkSettingWidClass->setObjectName(QStringLiteral("ComNetworkSettingWidClass"));
        ComNetworkSettingWidClass->resize(949, 669);
        gridLayout_3 = new QGridLayout(ComNetworkSettingWidClass);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        widget = new QWidget(ComNetworkSettingWidClass);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        ComEquipt_Layout = new QVBoxLayout();
        ComEquipt_Layout->setSpacing(6);
        ComEquipt_Layout->setObjectName(QStringLiteral("ComEquipt_Layout"));

        gridLayout_2->addLayout(ComEquipt_Layout, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget, 0, 0, 1, 1);

        widget_2 = new QWidget(ComNetworkSettingWidClass);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        ComNet_Layout = new QVBoxLayout();
        ComNet_Layout->setSpacing(6);
        ComNet_Layout->setObjectName(QStringLiteral("ComNet_Layout"));

        gridLayout->addLayout(ComNet_Layout, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget_2, 0, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(ComNetworkSettingWidClass);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        NetName_LineEdit = new QLineEdit(ComNetworkSettingWidClass);
        NetName_LineEdit->setObjectName(QStringLiteral("NetName_LineEdit"));

        horizontalLayout->addWidget(NetName_LineEdit);

        AddNetwork_PushButton = new QPushButton(ComNetworkSettingWidClass);
        AddNetwork_PushButton->setObjectName(QStringLiteral("AddNetwork_PushButton"));

        horizontalLayout->addWidget(AddNetwork_PushButton);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        groupBox = new QGroupBox(ComNetworkSettingWidClass);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        FreUpLimit_LineEdit = new QLineEdit(groupBox);
        FreUpLimit_LineEdit->setObjectName(QStringLiteral("FreUpLimit_LineEdit"));

        horizontalLayout_2->addWidget(FreUpLimit_LineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        FreLowLimit_LineEdit = new QLineEdit(groupBox);
        FreLowLimit_LineEdit->setObjectName(QStringLiteral("FreLowLimit_LineEdit"));

        horizontalLayout_3->addWidget(FreLowLimit_LineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        Fre_LineEdit = new QLineEdit(groupBox);
        Fre_LineEdit->setObjectName(QStringLiteral("Fre_LineEdit"));

        horizontalLayout_4->addWidget(Fre_LineEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        Power_LineEdit = new QLineEdit(groupBox);
        Power_LineEdit->setObjectName(QStringLiteral("Power_LineEdit"));

        horizontalLayout_5->addWidget(Power_LineEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        WorkMode_ComboBox = new QComboBox(groupBox);
        WorkMode_ComboBox->setObjectName(QStringLiteral("WorkMode_ComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(WorkMode_ComboBox->sizePolicy().hasHeightForWidth());
        WorkMode_ComboBox->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(WorkMode_ComboBox);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_7->addWidget(label_7);

        HopSample_LineEdit = new QLineEdit(groupBox);
        HopSample_LineEdit->setObjectName(QStringLiteral("HopSample_LineEdit"));

        horizontalLayout_7->addWidget(HopSample_LineEdit);


        verticalLayout->addLayout(horizontalLayout_7);


        verticalLayout_2->addWidget(groupBox);

        verticalSpacer_2 = new QSpacerItem(20, 78, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        Ok_PushButton = new QPushButton(ComNetworkSettingWidClass);
        Ok_PushButton->setObjectName(QStringLiteral("Ok_PushButton"));

        horizontalLayout_8->addWidget(Ok_PushButton);

        Cancel_PushButton = new QPushButton(ComNetworkSettingWidClass);
        Cancel_PushButton->setObjectName(QStringLiteral("Cancel_PushButton"));

        horizontalLayout_8->addWidget(Cancel_PushButton);

        Apply_PushButton = new QPushButton(ComNetworkSettingWidClass);
        Apply_PushButton->setObjectName(QStringLiteral("Apply_PushButton"));

        horizontalLayout_8->addWidget(Apply_PushButton);


        verticalLayout_2->addLayout(horizontalLayout_8);


        gridLayout_3->addLayout(verticalLayout_2, 0, 2, 1, 1);


        retranslateUi(ComNetworkSettingWidClass);

        QMetaObject::connectSlotsByName(ComNetworkSettingWidClass);
    } // setupUi

    void retranslateUi(QWidget *ComNetworkSettingWidClass)
    {
        ComNetworkSettingWidClass->setWindowTitle(QApplication::translate("ComNetworkSettingWidClass", "ComNetworkSettingWid", Q_NULLPTR));
        label->setText(QApplication::translate("ComNetworkSettingWidClass", "\347\275\221\347\273\234\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        AddNetwork_PushButton->setText(QApplication::translate("ComNetworkSettingWidClass", "\346\267\273\345\212\240\347\275\221\347\273\234", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ComNetworkSettingWidClass", "\347\275\221\347\273\234\345\217\202\346\225\260\351\205\215\347\275\256", Q_NULLPTR));
        label_2->setText(QApplication::translate("ComNetworkSettingWidClass", "\345\267\245\344\275\234\351\242\221\347\216\207\344\270\212\351\231\220\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("ComNetworkSettingWidClass", "\345\267\245\344\275\234\351\242\221\347\216\207\344\270\213\351\231\220\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("ComNetworkSettingWidClass", "\345\267\245\344\275\234\351\242\221\347\216\207\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("ComNetworkSettingWidClass", "\345\217\221\345\260\204\345\212\237\347\216\207\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("ComNetworkSettingWidClass", "\345\267\245\344\275\234\346\250\241\345\274\217\357\274\232", Q_NULLPTR));
        WorkMode_ComboBox->clear();
        WorkMode_ComboBox->insertItems(0, QStringList()
         << QApplication::translate("ComNetworkSettingWidClass", "\350\267\263\351\242\221", Q_NULLPTR)
         << QApplication::translate("ComNetworkSettingWidClass", "\345\256\232\351\242\221", Q_NULLPTR)
        );
        label_7->setText(QApplication::translate("ComNetworkSettingWidClass", "\350\267\263\351\242\221\345\233\276\346\240\267\357\274\232", Q_NULLPTR));
        HopSample_LineEdit->setText(QApplication::translate("ComNetworkSettingWidClass", "./Data/hopSample.txt", Q_NULLPTR));
        Ok_PushButton->setText(QApplication::translate("ComNetworkSettingWidClass", "\347\241\256\345\256\232", Q_NULLPTR));
        Cancel_PushButton->setText(QApplication::translate("ComNetworkSettingWidClass", "\345\217\226\346\266\210", Q_NULLPTR));
        Apply_PushButton->setText(QApplication::translate("ComNetworkSettingWidClass", "\345\272\224\347\224\250", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ComNetworkSettingWidClass: public Ui_ComNetworkSettingWidClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMNETWORKSETTINGWID_H
