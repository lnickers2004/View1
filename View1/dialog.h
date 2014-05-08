#ifndef Dialog_H
#define Dialog_H

#include <QtWidgets/QDialog>
#include "ui_Dialog.h"
#include <QtCore>
#include <QtGui>

class Dialog : public QDialog
{
	Q_OBJECT

public:
	Dialog(QWidget *parent = 0);
	~Dialog();

private:
	Ui::DialogClass *ui;
	QGraphicsScene *scene;
	QGraphicsEllipseItem *ellipse;
	QGraphicsRectItem *rectangle;

	//larry manual handwritten slots
	void on_pushButton_Clicked();
	void on_pushButton_2_Clicked();
};

#endif // Dialog_H
