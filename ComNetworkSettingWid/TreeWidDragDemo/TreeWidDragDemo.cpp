#include "TreeWidDragDemo.h"

TreeWidDragDemo::TreeWidDragDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//�������ݳ�ʼ��
	InitUi();

	//�����ź����ӳ�ʼ��
	IniConnect();
}

void TreeWidDragDemo::InitUi()
{
	//�������ʼ��
	left_tree_ = new QLeftTreeWidget;
	right_tree_ = new QRightTreeWidget;

	//�ϴ����߲���
	ui.left_layout->addWidget(left_tree_);
	ui.right_layout->addWidget(right_tree_);


	//���߰�Ȩ-------Qt����Ⱥ������Ҫ��һЩ������֢�ù��ܣ����벻������ɾ����仰
	this->setWindowTitle(QStringLiteral("��¿��С��i"));
}

void TreeWidDragDemo::IniConnect()
{

}

