#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TreeWidDragDemo.h"
#include "qlefttreewidget.h"
#include "qrighttreewidget.h"

class TreeWidDragDemo : public QMainWindow
{
	Q_OBJECT

public:
	TreeWidDragDemo(QWidget *parent = Q_NULLPTR);
	//界面数据初始化
	void InitUi();

	//界面信号连接初始化
	void IniConnect();

private:
	Ui::TreeWidDragDemoClass ui;
	//左边的树
	QLeftTreeWidget *left_tree_;

	//左边的树
	QRightTreeWidget *right_tree_;
};
