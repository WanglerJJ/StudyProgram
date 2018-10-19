
#include "ComNetTreeWidget.h"
#include "ComEquipTreeWidget.h"
#include "qevent.h"
#include "QAbstractItemView"
#include <QDrag> 
ComNetTreeWidget* ComNetTreeWidget::m_Instance = NULL;

ComNetTreeWidget* ComNetTreeWidget::GetInstance()
{
	if (NULL == m_Instance)
	{
		m_Instance = new ComNetTreeWidget();
	}
	return m_Instance;
}

ComNetTreeWidget::ComNetTreeWidget(QWidget *parent)
	: QTreeWidget(parent)
{
	ui.setupUi(this);
	QStringList netNameList;
	netNameList<<QStringLiteral("通信网络集合");
	this->addTopLevelItem(new QTreeWidgetItem(netNameList));

	this->setSelectionMode(QAbstractItemView::ExtendedSelection);
	this->setAcceptDrops(true);
	this->setDragEnabled(true);
}

ComNetTreeWidget::~ComNetTreeWidget()
{

}

void ComNetTreeWidget::mousePressEvent(QMouseEvent *event)
{
	if (event->button() == Qt::LeftButton)
	{
		m_startDragPoint = event->pos();
	}
	QTreeWidget::mousePressEvent(event);
}

void ComNetTreeWidget::mouseMoveEvent(QMouseEvent *event)
{
	if (event->buttons() & Qt::LeftButton)
	{
		int dragDistance = (event->pos() - m_startDragPoint).manhattanLength();
		/*	if (dragDistance > QApplication::startDragDistance())
		{*/
			performDrag();
		//}
	}
	QTreeWidget::mouseMoveEvent(event);
}

void ComNetTreeWidget::mouseReleaseEvent(QMouseEvent *event)
{
	QTreeWidget::mouseReleaseEvent(event);
}

void ComNetTreeWidget::dragEnterEvent(QDragEnterEvent *event)
{
	QWidget *source =  qobject_cast<ComEquipTreeWidget *>(event->source());  
	if (source && source != this) 
	{  
		event->setDropAction(Qt::CopyAction);  
		event->accept();  
	}  
}

void ComNetTreeWidget::dragMoveEvent(QDragMoveEvent *event)
{
	QWidget *source =  qobject_cast<ComEquipTreeWidget *>(event->source());  
	if (source && source != this)
	{  
		const TreeItemMimeData *pMimeData = (const TreeItemMimeData *)(event->mimeData()); 
		const QTreeWidgetItem *item = pMimeData->DragItemData();
		QTreeWidgetItem *currentItem = this->itemAt(event->pos());
		if (currentItem == item)           //不允许拖回到原来的item
		{
			event->ignore();
		} 
		else
		{
			setCurrentItem(currentItem);
			event->setDropAction(Qt::CopyAction);  
			event->accept();  
		}
	}  
}

void ComNetTreeWidget::dropEvent(QDropEvent *event)
{
	QWidget *source =  qobject_cast<ComEquipTreeWidget *>(event->source()); 
	const TreeItemMimeData *pMimeData = (const TreeItemMimeData *)(event->mimeData()); 
	if (source && source != this) 
	{  
		const QTreeWidgetItem *item = pMimeData->DragItemData();
		QTreeWidgetItem *pItem = item->clone();
		QTreeWidgetItem *currentItem = this->itemAt(event->pos());
		if (currentItem && (currentItem != item))
		{
			currentItem->addChild(pItem);
		} 
		else
		{
			this->addTopLevelItem(pItem);
		}
		event->setDropAction(Qt::CopyAction);  
		event->accept();  
	} 
}

void ComNetTreeWidget::performDrag()
{
	QTreeWidgetItem *item = currentItem();  
	if (item) 
	{  
		TreeItemMimeData *mimeData = new TreeItemMimeData;
		mimeData->SetDragData("ItemMimeData",item);
		QDrag *drag = new QDrag(this);  
		drag->setMimeData(mimeData);  
		drag->setPixmap(QPixmap(":/ComNetworkSettingWid/Resources/flag.png"));  
		drag->exec(Qt::CopyAction);
	} 
}
