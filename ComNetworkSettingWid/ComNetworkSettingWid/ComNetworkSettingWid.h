#ifndef COMNETWORKSETTINGWID_H
#define COMNETWORKSETTINGWID_H

#include <QtWidgets/QWidget>
#include "ui_ComNetworkSettingWid.h"
#include "ComEquipTreeWidget.h"
#include "ComNetTreeWidget.h"


class ComNetworkSettingWid : public QWidget
{
	Q_OBJECT

public:
	ComNetworkSettingWid(QWidget *parent = 0);
	~ComNetworkSettingWid();


private:
	void InitUI();
	void InitConnect();

	

private:
	Ui::ComNetworkSettingWidClass ui;

	ComEquipTreeWidget* m_comEquipTreeWid;
	ComNetTreeWidget* m_comNetTreeWid;

	private slots:
		void slotAddComNetwork();
};


#endif // COMNETWORKSETTINGWID_H
