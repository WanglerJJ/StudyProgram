/********************************************************************************
** Form generated from reading UI file 'ComEquipTreeWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMEQUIPTREEWIDGET_H
#define UI_COMEQUIPTREEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_ComEquipTreeWidget
{
public:

    void setupUi(QTreeWidget *ComEquipTreeWidget)
    {
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(ComEquipTreeWidget);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(ComEquipTreeWidget);
        if (ComEquipTreeWidget->objectName().isEmpty())
            ComEquipTreeWidget->setObjectName(QStringLiteral("ComEquipTreeWidget"));
        ComEquipTreeWidget->resize(400, 300);
        ComEquipTreeWidget->setDragEnabled(false);
        if (ComEquipTreeWidget->header()->objectName().isEmpty())
        ComEquipTreeWidget->header()->setVisible(false);

        retranslateUi(ComEquipTreeWidget);

        QMetaObject::connectSlotsByName(ComEquipTreeWidget);
    } // setupUi

    void retranslateUi(QTreeWidget *ComEquipTreeWidget)
    {
        QTreeWidgetItem *___qtreewidgetitem = ComEquipTreeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("ComEquipTreeWidget", "\351\200\232\344\277\241\350\243\205\345\244\207", Q_NULLPTR));

        const bool __sortingEnabled = ComEquipTreeWidget->isSortingEnabled();
        ComEquipTreeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = ComEquipTreeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("ComEquipTreeWidget", "\351\242\204\350\255\246\346\234\272", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QApplication::translate("ComEquipTreeWidget", "\346\225\260\346\215\256\351\223\276\351\200\232\344\277\241", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem2->child(0);
        ___qtreewidgetitem3->setText(0, QApplication::translate("ComEquipTreeWidget", "\351\200\232\344\277\241\345\217\221\345\260\204\346\234\272", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem2->child(1);
        ___qtreewidgetitem4->setText(0, QApplication::translate("ComEquipTreeWidget", "\351\200\232\344\277\241\346\216\245\346\224\266\346\234\272", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem5->setText(0, QApplication::translate("ComEquipTreeWidget", "\350\266\205\347\237\255\346\263\242\351\200\232\344\277\241\347\224\265\345\217\260", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem5->child(0);
        ___qtreewidgetitem6->setText(0, QApplication::translate("ComEquipTreeWidget", "\351\200\232\344\277\241\345\217\221\345\260\204\346\234\272", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem5->child(1);
        ___qtreewidgetitem7->setText(0, QApplication::translate("ComEquipTreeWidget", "\351\200\232\344\277\241\346\216\245\346\224\266\346\234\272", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem8 = ComEquipTreeWidget->topLevelItem(1);
        ___qtreewidgetitem8->setText(0, QApplication::translate("ComEquipTreeWidget", "\346\210\230\346\226\227\346\234\272", Q_NULLPTR));
        ComEquipTreeWidget->setSortingEnabled(__sortingEnabled);

        ComEquipTreeWidget->setWindowTitle(QApplication::translate("ComEquipTreeWidget", "ComEquipTreeWidget", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ComEquipTreeWidget: public Ui_ComEquipTreeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMEQUIPTREEWIDGET_H
