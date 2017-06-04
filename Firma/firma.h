#ifndef FIRMA_H
#define FIRMA_H

#include <QtWidgets/QMainWindow>
#include "ui_firma.h"

class Firma : public QMainWindow
{
	Q_OBJECT

public:
	Firma(QWidget *parent = 0);
	~Firma();

private:
	Ui::FirmaClass ui;
};

#endif // FIRMA_H
