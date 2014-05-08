#include "stdafx.h"
#include "view1.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	View1 w;
	w.show();
	return a.exec();
}
