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
	//�������ݳ�ʼ��
	void InitUi();

	//�����ź����ӳ�ʼ��
	void IniConnect();

private:
	Ui::TreeWidDragDemoClass ui;
	//��ߵ���
	QLeftTreeWidget *left_tree_;

	//��ߵ���
	QRightTreeWidget *right_tree_;
};
