#ifndef QLEFTTREEWIDGET_H
#define QLEFTTREEWIDGET_H

#include <QWidget>
#include <QTreeWidget>

#include <QDragEnterEvent>
#include <QDragMoveEvent>
#include <QDropEvent>

class QLeftTreeWidget : public QTreeWidget
{
    Q_OBJECT
public:
    explicit QLeftTreeWidget(QWidget *parent = 0);

    //界面数据初始化
    void InitUi();

    //界面信号连接初始化
    void IniConnect();

//拖动节点主要是这里
protected:
    void dragEnterEvent(QDragEnterEvent *event);
    void dragMoveEvent(QDragMoveEvent *event);
    void dropEvent(QDropEvent *event);


signals:

public slots:
};


#endif // QLEFTTREEWIDGET_H
