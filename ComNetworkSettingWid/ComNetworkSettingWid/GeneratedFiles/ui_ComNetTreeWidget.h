/********************************************************************************
** Form generated from reading UI file 'ComNetTreeWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMNETTREEWIDGET_H
#define UI_COMNETTREEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_ComNetTreeWidget
{
public:

    void setupUi(QTreeWidget *ComNetTreeWidget)
    {
        if (ComNetTreeWidget->objectName().isEmpty())
            ComNetTreeWidget->setObjectName(QStringLiteral("ComNetTreeWidget"));
        ComNetTreeWidget->resize(400, 300);
        if (ComNetTreeWidget->header()->objectName().isEmpty())
        ComNetTreeWidget->header()->setVisible(false);

        retranslateUi(ComNetTreeWidget);

        QMetaObject::connectSlotsByName(ComNetTreeWidget);
    } // setupUi

    void retranslateUi(QTreeWidget *ComNetTreeWidget)
    {
        QTreeWidgetItem *___qtreewidgetitem = ComNetTreeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("ComNetTreeWidget", "\351\200\232\344\277\241\347\275\221\347\273\234", Q_NULLPTR));
        ComNetTreeWidget->setWindowTitle(QApplication::translate("ComNetTreeWidget", "ComNetTreeWidget", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ComNetTreeWidget: public Ui_ComNetTreeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMNETTREEWIDGET_H
