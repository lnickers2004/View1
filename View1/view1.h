#ifndef VIEW1_H
#define VIEW1_H

#include <QtWidgets/QDialog>
#include "ui_view1.h"

class View1 : public QDialog
{
	Q_OBJECT

public:
	View1(QWidget *parent = 0);
	~View1();

private:
	Ui::View1Class ui;
};

#endif // VIEW1_H
