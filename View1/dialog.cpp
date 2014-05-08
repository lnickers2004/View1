#include "stdafx.h"
#include "Dialog.h"

Dialog::Dialog(QWidget *parent)
	: QDialog(parent),
	ui(new Ui::DialogClass)
{
	ui->setupUi(this);

	scene = new QGraphicsScene(this);
	ui->graphicsView->setScene(scene);

	QBrush redBrush(Qt::red);
	QBrush blueBrush(Qt::blue);

	QPen blackpen(Qt::black);

	blackpen.setWidth(6);

	ellipse = scene->addEllipse(0,0,100,100,blackpen,redBrush);
	rectangle = scene->addRect(0,0,50,50,blackpen,blueBrush);
	rectangle->setFlag(QGraphicsItem::ItemIsMovable,true);

}

Dialog::~Dialog()
{

}
