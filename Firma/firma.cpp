#include "firma.h"
#include "Ksiegarnia.h"
#include "Drukarnia.h"
#include "Ksiegarnia internetowa.h"
#include "Przedsiebiorstwo.h"
#include "TworzenieObiektu.h"
#include <fstream>
#include <string>

using namespace std;

Firma::Firma(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	Ksiegarnia *ks = new Ksiegarnia("Armagedon", "Nowak", 123456789, "Marszalkowska", 3, 4);
	przedsiebiorstwo.push_back(ks);
	ui.listaObiektow->addItem("Ksiegarnia stacjonarna");
	KsiegarniaInternetowa *ksi = new KsiegarniaInternetowa("Zeus", "Kawka", 19239388, "zeus.pl", 2, 10);
	przedsiebiorstwo.push_back(ksi);
	ui.listaObiektow->addItem("KsiegarniaInternetowa");
	Drukarnia *dr = new Drukarnia("Printer", "Malek", 546723892, "Wilenska", 1, 5);
	przedsiebiorstwo.push_back(dr);
	ui.listaObiektow->addItem("Drukarnia");
	QObject::connect(stworzony.przyciskUtworzObiekt, SIGNAL(clicked()), this, SLOT(dodajObiekt()));
	ui.listaObiektow->setCurrentRow(0);
}

Firma::~Firma()
{

}

void Firma::dodajObiekt()
{
	ui.poleTekstowe->clear();
	string nazwa, wlasciciel, adres, adres_domeny;
	int rodzaj, nr_tel, liczba_pracownikow, liczba;
	
	rodzaj = stworzony.listaTypow->currentRow();
	nr_tel = stworzony.poleNrTel->text().toInt();
	liczba_pracownikow = stworzony.poleLiczbaPracownikow->text().toInt();
	liczba = stworzony.poleLiczba->text().toInt();
	nazwa = stworzony.poleNazwa->text().toStdString();
	wlasciciel = stworzony.poleWlasciciel->text().toStdString();
	adres = stworzony.poleAdres->text().toStdString();
	adres_domeny = stworzony.poleAdresDomeny->text().toStdString();

		if (rodzaj == 0) 
		{
			KsiegarniaInternetowa *tmp = new KsiegarniaInternetowa(nazwa, wlasciciel, nr_tel, adres, liczba_pracownikow, liczba);
			przedsiebiorstwo.push_back(tmp);
			ui.listaObiektow->addItem("Ksiegarnia internetowa");
		}
		else if (rodzaj == 1) 
		{
			Ksiegarnia *tmp = new Ksiegarnia(nazwa, wlasciciel, nr_tel, adres, liczba_pracownikow, liczba);
			przedsiebiorstwo.push_back(tmp);
			ui.listaObiektow->addItem("Ksiegarnia stacjonarna");
		}
		else if (rodzaj == 2) 
		{
			Drukarnia *tmp = new Drukarnia(nazwa, wlasciciel, nr_tel, adres, liczba_pracownikow, liczba);
			przedsiebiorstwo.push_back(tmp);
			ui.listaObiektow->addItem("Drukarnia");
		}
}

void Firma::usunObiekt()
{
	if(przedsiebiorstwo.size()>0)
	{
		ui.poleTekstowe->clear();
		int nr = ui.listaObiektow->currentRow();
		przedsiebiorstwo.erase(przedsiebiorstwo.begin()+nr);
		ui.listaObiektow->takeItem(nr);
	}else
	{
		ui.poleTekstowe->clear();
		ui.poleTekstowe->append("BRAK OBIEKTOW!!!");
	}
	return;
}

void Firma::otworzTworzenieObiektu()
{
	ui.poleTekstowe->clear();
	stworzony.exec();
}

void Firma::wyswietlStan()
{	
	if (przedsiebiorstwo.size()>0)
	{
		ui.poleTekstowe->clear();
		for (size_t i = 0; i < this->przedsiebiorstwo.size(); i++)
	{
		wyswietlQString(i, przedsiebiorstwo);
	}
	}else
	{
		ui.poleTekstowe->clear();
		ui.poleTekstowe->append("BRAK OBIEKTOW!!!");
	}
	return;
}

void Firma::wyswietlDaneWybranego()
{
	if (przedsiebiorstwo.size()>0)
	{
		ui.poleTekstowe->clear();
		int nr = ui.listaObiektow->currentRow();
		wyswietlQString(nr, przedsiebiorstwo);
	}else
	{
		ui.poleTekstowe->clear();
		ui.poleTekstowe->append("BRAK OBIEKTOW!!!");
	}
	return;
}
void Firma::wyswietlQString(int i, vector <Przedsiebiorstwo*> przedsiebiorstwo)
{
	ui.poleTekstowe->append(QString::fromStdString(przedsiebiorstwo[i]->wyswietlDane()));
}