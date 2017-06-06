#ifndef FIRMA_H
#define FIRMA_H

#include <QtWidgets/QMainWindow>
#include "ui_firma.h"
#include "Ksiegarnia.h"
#include "Drukarnia.h"
#include "Ksiegarnia internetowa.h"
#include "Przedsiebiorstwo.h"
#include "TworzenieObiektu.h"
#include <vector>

class Firma : public QMainWindow
{
	Q_OBJECT

public:
	
	Firma(QWidget *parent = 0);
	~Firma();
	void wyswietlQString(int i, vector <Przedsiebiorstwo*> przedsiebiorstwo);

public slots:
	void wyswietlStan();
	void dodajObiekt();
	void usunObiekt();
	void otworzTworzenieObiektu();
	void wyswietlDaneWybranego();

private:
	Ui::FirmaClass ui;
	TworzenieObiektu stworzony;
	vector <Przedsiebiorstwo*> przedsiebiorstwo;
};

#endif // FIRMA_H
