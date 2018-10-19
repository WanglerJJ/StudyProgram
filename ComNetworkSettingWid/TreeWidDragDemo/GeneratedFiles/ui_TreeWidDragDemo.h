/********************************************************************************
** Form generated from reading UI file 'TreeWidDragDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TREEWIDDRAGDEMO_H
#define UI_TREEWIDDRAGDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TreeWidDragDemoClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QGridLayout *left_layout;
    QGridLayout *right_layout;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TreeWidDragDemoClass)
    {
        if (TreeWidDragDemoClass->objectName().isEmpty())
            TreeWidDragDemoClass->setObjectName(QStringLiteral("TreeWidDragDemoClass"));
        TreeWidDragDemoClass->resize(600, 400);
        centralWidget = new QWidget(TreeWidDragDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        left_layout = new QGridLayout();
        left_layout->setSpacing(6);
        left_layout->setObjectName(QStringLiteral("left_layout"));

        horizontalLayout->addLayout(left_layout);

        right_layout = new QGridLayout();
        right_layout->setSpacing(6);
        right_layout->setObjectName(QStringLiteral("right_layout"));

        horizontalLayout->addLayout(right_layout);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        TreeWidDragDemoClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TreeWidDragDemoClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 26));
        TreeWidDragDemoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TreeWidDragDemoClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TreeWidDragDemoClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TreeWidDragDemoClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TreeWidDragDemoClass->setStatusBar(statusBar);

        retranslateUi(TreeWidDragDemoClass);

        QMetaObject::connectSlotsByName(TreeWidDragDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *TreeWidDragDemoClass)
    {
        TreeWidDragDemoClass->setWindowTitle(QApplication::translate("TreeWidDragDemoClass", "TreeWidDragDemo", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TreeWidDragDemoClass: public Ui_TreeWidDragDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TREEWIDDRAGDEMO_H
