
#include "ComEquipTreeWidget.h"
#include "qevent.h"
#include "QAbstractItemView"
#include <QDrag> 
ComEquipTreeWidget* ComEquipTreeWidget::m_Instance = NULL;

ComEquipTreeWidget* ComEquipTreeWidget::GetInstance()
{
	if (NULL == m_Instance)
	{
		m_Instance = new ComEquipTreeWidget();
	}
	return m_Instance;
}

ComEquipTreeWidget::ComEquipTreeWidget(QWidget *parent)
	: QTreeWidget(parent)
{
	ui.setupUi(this);

	m_CtrlPressed = false;
	this->setSelectionMode(QAbstractItemView::ExtendedSelection);
	this->setAcceptDrops(true);
	this->setDragEnabled(true);
}

ComEquipTreeWidget::~ComEquipTreeWidget()
{

}

void ComEquipTreeWidget::keyPressEvent(QKeyEvent *event)
{
	if (event->key() == Qt::Key_Control)
	{
		m_CtrlPressed = true;
	}
}

void ComEquipTreeWidget::keyReleaseEvent(QKeyEvent *event)
{
	if (event->key() == Qt::Key_Control)
	{
		m_CtrlPressed = false;
	}
}

void ComEquipTreeWidget::mousePressEvent(QMouseEvent *event)
{
	if (event->button() == Qt::LeftButton)
	{
		m_startDragPoint = event->pos();
	}
	QTreeWidget::mousePressEvent(event);
}

void ComEquipTreeWidget::mouseMoveEvent(QMouseEvent *event)
{
	if (event->buttons() & Qt::LeftButton)
	{
		int dragDistance = (event->pos() - m_startDragPoint).manhattanLength();
		if (dragDistance > QApplication::startDragDistance())
		{
			performDrag();
		}
	}
	QTreeWidget::mouseMoveEvent(event);
}

void ComEquipTreeWidget::mouseReleaseEvent(QMouseEvent *event)
{
	QTreeWidget::mouseReleaseEvent(event);
}

void ComEquipTreeWidget::dragEnterEvent(QDragEnterEvent *event)
{
	QWidget *source =  qobject_cast<ComEquipTreeWidget *>(event->source());  
	if (source /*&& source != this*/) 
	{  
		if (m_CtrlPressed)
		{
			event->setDropAction(Qt::CopyAction);  
		} 
		else
		{
			event->setDropAction(Qt::MoveAction);  
		}
//		event->setDropAction(Qt::MoveAction);  
		event->accept();  
	}  
}

void ComEquipTreeWidget::dragMoveEvent(QDragMoveEvent *event)
{
	QWidget *source =  qobject_cast<ComEquipTreeWidget *>(event->source());  
	if (source /*&& source != this*/)
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
			if (m_CtrlPressed)
			{
				event->setDropAction(Qt::CopyAction);  
			} 
			else
			{
				event->setDropAction(Qt::MoveAction);  
			}
	//		event->setDropAction(Qt::MoveAction);  
			event->accept();  
		}
	}  
}

void ComEquipTreeWidget::dropEvent(QDropEvent *event)
{
	QWidget *source =  qobject_cast<ComEquipTreeWidget *>(event->source()); 
	const TreeItemMimeData *pMimeData = (const TreeItemMimeData *)(event->mimeData()); 
	if (source /*&& source != this*/) 
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
		//if (m_CtrlPressed)
		//{
		//	event->setDropAction(Qt::CopyAction);  
		//} 
		//else
		//{
		//	event->setDropAction(Qt::MoveAction);  
		//}
		event->setDropAction(Qt::MoveAction);  
		event->accept();  
	} 
}

void ComEquipTreeWidget::performDrag()
{
	QTreeWidgetItem *item = currentItem();  
	if (item) 
	{  
		TreeItemMimeData *mimeData = new TreeItemMimeData;
		mimeData->SetDragData("ItemMimeData",item);
		QDrag *drag = new QDrag(this);  
		drag->setMimeData(mimeData);  
		drag->setPixmap(QPixmap(":/ComNetworkSettingWid/Resources/flag.png"));  
		//if (m_CtrlPressed)
		//{
		//	drag->exec(Qt::CopyAction);
		//} 
		//else
		//{
			drag->exec(Qt::MoveAction);
			delete item;
	//	}
	} 
}