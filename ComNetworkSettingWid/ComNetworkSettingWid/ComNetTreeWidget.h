#ifndef COMNETTREEWIDGET_H
#define COMNETTREEWIDGET_H

#include <QTreeWidget>
#include "ui_ComNetTreeWidget.h"

class ComNetTreeWidget : public QTreeWidget
{
	Q_OBJECT

public:
	static ComNetTreeWidget* GetInstance();
protected:
	ComNetTreeWidget(QWidget *parent = 0);
	~ComNetTreeWidget();

protected:
	void mouseMoveEvent(QMouseEvent *event);
	void mousePressEvent(QMouseEvent *event);
	void mouseReleaseEvent(QMouseEvent *event);

	void dragEnterEvent(QDragEnterEvent *event);
	void dragMoveEvent(QDragMoveEvent *event);
	void dropEvent(QDropEvent *event);

private:
	QPoint     m_startDragPoint;
	void       performDrag();

private:
	Ui::ComNetTreeWidget ui;
	static ComNetTreeWidget* m_Instance;
};

#endif // COMNETTREEWIDGET_H
