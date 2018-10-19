
#include "ComNetworkSettingWid.h"
#include <QTreeWidgetItem>
#include <QMessageBox>

ComNetworkSettingWid::ComNetworkSettingWid(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	InitUI();
	InitConnect();
}

ComNetworkSettingWid::~ComNetworkSettingWid()
{

}

void ComNetworkSettingWid::InitUI()
{
	m_comEquipTreeWid = ComEquipTreeWidget::GetInstance();
	m_comNetTreeWid = ComNetTreeWidget::GetInstance();
	ui.ComEquipt_Layout->addWidget(m_comEquipTreeWid);
	ui.ComNet_Layout->addWidget(m_comNetTreeWid);
}

void ComNetworkSettingWid::InitConnect()
{
	connect(ui.AddNetwork_PushButton, SIGNAL(clicked()), this, SLOT(slotAddComNetwork()));
}

void ComNetworkSettingWid::slotAddComNetwork()
{
	QString netName = ui.NetName_LineEdit->text();
	if (netName.isEmpty())
	{
		QMessageBox::information(NULL, QStringLiteral("提示"), QStringLiteral("请输入网络名称！"));
		return;
	}
	QTreeWidgetItem* netItem = new QTreeWidgetItem();
	netItem->setText(0, netName);
	m_comNetTreeWid->topLevelItem(0)->addChild(netItem);
}

