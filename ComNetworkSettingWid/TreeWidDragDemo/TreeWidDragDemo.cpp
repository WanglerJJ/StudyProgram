#include "TreeWidDragDemo.h"

TreeWidDragDemo::TreeWidDragDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//界面数据初始化
	InitUi();

	//界面信号连接初始化
	IniConnect();
}

void TreeWidDragDemo::InitUi()
{
	//树界面初始化
	left_tree_ = new QLeftTreeWidget;
	right_tree_ = new QRightTreeWidget;

	//上传两边布局
	ui.left_layout->addWidget(left_tree_);
	ui.right_layout->addWidget(right_tree_);


	//作者版权-------Qt交流群管理，主要出一些疑难杂症得功能，编译不过可以删除这句话
	this->setWindowTitle(QStringLiteral("潘驴邓小闲i"));
}

void TreeWidDragDemo::IniConnect()
{

}

