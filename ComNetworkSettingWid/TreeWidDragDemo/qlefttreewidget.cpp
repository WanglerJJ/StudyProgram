#include "qlefttreewidget.h"

QLeftTreeWidget::QLeftTreeWidget(QWidget *parent) : QTreeWidget(parent)
{
    //界面数据初始化
    InitUi();

    //界面信号连接初始化
    IniConnect();

}

void QLeftTreeWidget::InitUi()
{
    //允许树拖动-----必须设置
    //追踪鼠标事件
    this->setMouseTracking(true);
    //允许当前界面拖动
    this->setDragEnabled(true);
    this->setAcceptDrops(true);
    //拖动事件为Copy-----注意：也可以是剪切 Qt::MoveAction
    this->setDefaultDropAction(Qt::MoveAction);

    //添加测试数据------这快大可不管不用解析这块代码！！！！！！
    QTreeWidgetItem *top_item_a = new QTreeWidgetItem;
    top_item_a->setText(0, "AAA");
    QTreeWidgetItem *child_item_1 = new QTreeWidgetItem;
    child_item_1->setText(0, "111");
    top_item_a->addChild(child_item_1);

    QTreeWidgetItem *top_item_b = new QTreeWidgetItem;
    top_item_b->setText(0, "BBB");
    QTreeWidgetItem *child_item_2 = new QTreeWidgetItem;
    child_item_2->setText(0, "222");
    top_item_b->addChild(child_item_2);

    QTreeWidgetItem *top_item_c = new QTreeWidgetItem;
    top_item_c->setText(0, "CCC");
    QTreeWidgetItem *child_item_3 = new QTreeWidgetItem;
    child_item_3->setText(0, "333");
    top_item_c->addChild(child_item_3);


    //测试数据挂载在树上
    this->addTopLevelItem(top_item_a);
    this->addTopLevelItem(top_item_b);
    this->addTopLevelItem(top_item_c);

    //树全部展开
    this->expandAll();
}

void QLeftTreeWidget::IniConnect()
{

}

void QLeftTreeWidget::dragEnterEvent(QDragEnterEvent *event)
{
    QTreeWidget::dragEnterEvent(event);
}

void QLeftTreeWidget::dragMoveEvent(QDragMoveEvent *event)
{
    QTreeWidget::dragMoveEvent(event);
}

void QLeftTreeWidget::dropEvent(QDropEvent *event)
{
    QTreeWidget::dropEvent(event);
}

