#ifndef FIRMA_H
#define FIRMA_H

#include <QtWidgets/QMainWindow>
#include <QMessageBox>
#include <Qt>
#include <QFileDialog>
#include <QTextStream>
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
	void wyswietlZdjecie(int i);
	void zapiszPlik(QString fileName);

public slots:
	void wyswietlStan();
	void dodajObiekt();
	void usunObiekt();
	void otworzTworzenieObiektu();
	void wyswietlDaneWybranego();
	void wczytajPlik();
	void zapiszDoObecnego();
	void zapiszJako();

private:
	static int liczba_obiektow;
	Ui::FirmaClass ui;
	TworzenieObiektu stworzony;
	vector <Przedsiebiorstwo*> przedsiebiorstwo;
};

#endif // FIRMA_H
