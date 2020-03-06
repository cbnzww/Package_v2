#include "stdafx.h"
#include "package_v2.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Package_v2 w;
	w.show();
	return a.exec();
}
