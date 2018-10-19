
#include "ComNetworkSettingWid.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ComNetworkSettingWid w;
	w.show();
	return a.exec();
}
