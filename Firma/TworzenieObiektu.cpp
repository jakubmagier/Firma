#include "TworzenieObiektu.h"
#include <QMessageBox>

TworzenieObiektu::TworzenieObiektu(QWidget *parent) 
{
	setupUi(this);

	setWindowFlags(Qt::Dialog | Qt::CustomizeWindowHint | Qt::WindowTitleHint);

	QPixmap bkgnd("image4.jpg");
	bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
	QPalette palette;
	palette.setBrush(QPalette::Background, bkgnd);
	this->setPalette(palette);
}