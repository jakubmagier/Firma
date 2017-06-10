#include "firma.h"
#include "Ksiegarnia.h"
#include "Drukarnia.h"
#include "Ksiegarnia internetowa.h"
#include "Przedsiebiorstwo.h"
#include "TworzenieObiektu.h"
#include <fstream>
#include <string>

using namespace std;

int Firma::liczba_obiektow = 0;

QString tekst, typ, poprzedniaSciezka;

Firma::Firma(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	QPixmap bkgnd("image.jpg");
	bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
	QPalette palette;
	palette.setBrush(QPalette::Background, bkgnd);
	this->setPalette(palette);

	ui.listaObiektow->setStyleSheet("QListView::item:selected { background: palette(Highlight) }");
	stworzony.listaTypow->setStyleSheet("QListView::item:selected { background: palette(Highlight) }");

	setWindowFlags(Qt::Dialog | Qt::CustomizeWindowHint | Qt::WindowTitleHint);

	Ksiegarnia *ks = new Ksiegarnia("Armagedon", "Nowak", 123456789, "Marszalkowska", 3, 4);
	przedsiebiorstwo.push_back(ks);
	ui.listaObiektow->addItem("Ksiegarnia stacjonarna " + QString::fromStdString("Armagedon"));
	KsiegarniaInternetowa *ksi = new KsiegarniaInternetowa("Zeus", "Kawka", 19239388, "zeus.pl", 2, 10);
	przedsiebiorstwo.push_back(ksi);
	ui.listaObiektow->addItem("Ksiegarnia internetowa " + QString::fromStdString("Zeus"));
	Drukarnia *dr = new Drukarnia("Printer", "Malek", 546723892, "Wilenska", 1, 5);
	przedsiebiorstwo.push_back(dr);
	ui.listaObiektow->addItem("Drukarnia " + QString::fromStdString("Printer"));

	QObject::connect(stworzony.przyciskUtworzObiekt, SIGNAL(clicked()), this, SLOT(dodajObiekt()));

	ui.listaObiektow->setCurrentRow(0);

	ui.przycisk4->setVisible(false);
}

Firma::~Firma()
{

}

void Firma::dodajObiekt()
{
	ui.poleTekstowe->clear();
	ui.miejsceZdjecia->clear();

	string nazwa, wlasciciel, adres, adres_domeny;
	int rodzaj, nr_tel, liczba_pracownikow, liczba;

	rodzaj = stworzony.listaTypow->currentRow();
	nr_tel = stworzony.poleNrTel->text().toInt();
	liczba_pracownikow = stworzony.poleLiczbaPracownikow->text().toInt();
	liczba = stworzony.poleLiczba->text().toInt();
	nazwa = stworzony.poleNazwa->text().toStdString();
	nazwa.erase(std::remove(nazwa.begin(), nazwa.end(), ' '), nazwa.end());
	wlasciciel = stworzony.poleWlasciciel->text().toStdString();
	wlasciciel.erase(std::remove(wlasciciel.begin(), wlasciciel.end(), ' '), wlasciciel.end());
	adres = stworzony.poleAdres->text().toStdString();
	adres.erase(std::remove(adres.begin(), adres.end(), ' '), adres.end());
	adres_domeny = stworzony.poleAdresDomeny->text().toStdString();
	adres_domeny.erase(std::remove(adres_domeny.begin(), adres_domeny.end(), ' '), adres_domeny.end());

		if (rodzaj == 0) 
		{
			KsiegarniaInternetowa *tmp = new KsiegarniaInternetowa(nazwa, wlasciciel, nr_tel, adres_domeny, liczba_pracownikow, liczba);
			przedsiebiorstwo.push_back(tmp);
			ui.listaObiektow->addItem("Ksiegarnia internetowa " + QString::fromStdString(nazwa));
			ui.listaObiektow->setCurrentRow(0);
		}
		else if (rodzaj == 1) 
		{
			Ksiegarnia *tmp = new Ksiegarnia(nazwa, wlasciciel, nr_tel, adres, liczba_pracownikow, liczba);
			przedsiebiorstwo.push_back(tmp);
			ui.listaObiektow->addItem("Ksiegarnia stacjonarna " + QString::fromStdString(nazwa));
			ui.listaObiektow->setCurrentRow(0);
		}
		else if (rodzaj == 2) 
		{
			Drukarnia *tmp = new Drukarnia(nazwa, wlasciciel, nr_tel, adres, liczba_pracownikow, liczba);
			przedsiebiorstwo.push_back(tmp);
			ui.listaObiektow->addItem("Drukarnia " + QString::fromStdString(nazwa));
			ui.listaObiektow->setCurrentRow(0);
		}
}

void Firma::usunObiekt()
{
	if(przedsiebiorstwo.size()>0)
	{
		ui.poleTekstowe->clear();
		ui.miejsceZdjecia->clear();
		int nr = ui.listaObiektow->currentRow();
		przedsiebiorstwo.erase(przedsiebiorstwo.begin()+nr);
		ui.listaObiektow->takeItem(nr);
	}else
	{
		ui.poleTekstowe->clear();
		ui.miejsceZdjecia->clear();
		QMessageBox msgBox;
		msgBox.setText("Brak obiektow w bazie!");
		msgBox.exec();
		ui.poleTekstowe->append("BRAK OBIEKTOW!!!");
	}
	return;
}

void Firma::otworzTworzenieObiektu()
{
	ui.poleTekstowe->clear();
	ui.miejsceZdjecia->clear();
	stworzony.poleNrTel->clear();
	stworzony.poleLiczbaPracownikow->clear();
	stworzony.poleLiczba->clear();
	stworzony.poleNazwa->clear();
	stworzony.poleWlasciciel->clear();
	stworzony.poleAdres->clear();
	stworzony.poleAdresDomeny->clear();
	stworzony.exec();
}

void Firma::wyswietlStan()
{	
	if (przedsiebiorstwo.size()>0)
	{
		ui.poleTekstowe->clear();
		ui.miejsceZdjecia->clear();
		for (size_t i = 0; i < this->przedsiebiorstwo.size(); i++)
		{
		wyswietlQString(i, przedsiebiorstwo);
		}
	}else
	{
		ui.poleTekstowe->clear();
		ui.poleTekstowe->append("BRAK OBIEKTOW!!!");
		ui.miejsceZdjecia->clear();
	}
	return;
}

void Firma::wyswietlDaneWybranego()
{
	ui.poleTekstowe->clear();
	int nr = ui.listaObiektow->currentRow();
	wyswietlQString(nr, przedsiebiorstwo);
	wyswietlZdjecie(nr);
	return;
}
void Firma::wczytajPlik()
{
		QString fileName = QFileDialog::getOpenFileName(this, tr("Otwórz..."), "/home/", tr("Pliki txt (*.txt)"));
		QFile plik(fileName);
		if (!plik.open(QIODevice::ReadOnly | QIODevice::Text))
			return;        
		int ilosc_obiektow, rodzaj;
		ifstream input;
		input.open(fileName.toStdString());
		input >> ilosc_obiektow;
		for (size_t i = 0; i < ilosc_obiektow; i++)
		{
			input >> rodzaj;
			if (rodzaj == 1)
			{
				Ksiegarnia *tmp = new Ksiegarnia();
				tmp[0].wpiszDaneZPliku(input);
				string nazwa = tmp[0].wyswietlNazwe();
				przedsiebiorstwo.push_back(tmp);
				ui.poleTekstowe->clear();
				ui.listaObiektow->addItem("Ksiegarnia stacjonarna " + QString::fromStdString(nazwa));
			}else if (rodzaj == 2)
			{
				KsiegarniaInternetowa *tmp = new KsiegarniaInternetowa();
				tmp[0].wpiszDaneZPliku(input);
				string nazwa = tmp[0].wyswietlNazwe();
				przedsiebiorstwo.push_back(tmp);
				ui.poleTekstowe->clear();
				ui.listaObiektow->addItem("Ksiegarnia internetowa " + QString::fromStdString(nazwa));
			}else if (rodzaj == 3)
			{
				Drukarnia *tmp = new Drukarnia();
				tmp[0].wpiszDaneZPliku(input);
				string nazwa = tmp[0].wyswietlNazwe();
				przedsiebiorstwo.push_back(tmp);
				ui.poleTekstowe->clear();
				ui.listaObiektow->addItem("Drukarnia " + QString::fromStdString(nazwa));
			}
		}
		plik.close();
		poprzedniaSciezka = fileName;
		ui.przycisk4->setVisible(true);
		ui.listaObiektow->setCurrentRow(0);
}
void Firma::zapiszPlik(QString fileName)
{	
	QFile plik(fileName);
	plik.open(QIODevice::WriteOnly | QIODevice::Truncate | QIODevice::Text);
	QTextStream stream(&plik);
	int l = przedsiebiorstwo.size();
	QString ilosc_obiektow = QString::number(l);
	stream << ilosc_obiektow << endl;
	for (size_t i = 0; i<this->przedsiebiorstwo.size(); i++)
	{
		int k = przedsiebiorstwo[i]->wyswietlTyp();
		QString typ = QString::number(k);
		tekst = QString::fromStdString(przedsiebiorstwo[i]->wyswietlDane());
		stream << typ << endl;
		stream << tekst << endl;
	}
	poprzedniaSciezka = fileName;

	plik.close();
}

void Firma::zapiszDoObecnego()
{
	zapiszPlik(poprzedniaSciezka);
}

void Firma::zapiszJako()
{
	QString fileName;
	tekst = ui.poleTekstowe->toPlainText();
		fileName = QFileDialog::getSaveFileName
		(this, tr("Zapisz plik jako..."), tr("/home/"), tr("Pliki tekstowe (*.txt)"));

	if (fileName.isEmpty())
		return;

	QFile plik(fileName);
	plik.open(QIODevice::WriteOnly | QIODevice::Truncate | QIODevice::Text);
	QTextStream stream(&plik);
	int l = przedsiebiorstwo.size();
	QString ilosc_obiektow = QString::number(l);
	stream << ilosc_obiektow << endl;
	for (size_t i = 0; i<this->przedsiebiorstwo.size(); i++)
	{	
		int k = przedsiebiorstwo[i]->wyswietlTyp();
		QString typ = QString::number(k);
		tekst = QString::fromStdString(przedsiebiorstwo[i]->wyswietlDane());
		stream << typ << endl;
		stream << tekst << endl;
	}
	poprzedniaSciezka = fileName;

	plik.close();
}
void Firma::wyswietlQString(int i, vector <Przedsiebiorstwo*> przedsiebiorstwo)
{
	ui.poleTekstowe->append(QString::fromStdString(przedsiebiorstwo[i]->wyswietlDane()));
}

void Firma::wyswietlZdjecie(int i)
{
	int nr = przedsiebiorstwo[i]->wyswietlTyp();
	switch (nr) 
	{
		case 1: {
		QPixmap pix("image1.jpg");
		ui.miejsceZdjecia->setPixmap(pix);
		break;
		}
		case 2: {
		QPixmap pix("image2.jpg");
		ui.miejsceZdjecia->setPixmap(pix);
		break;
		}
		case 3:{
		QPixmap pix("image3.jpg");
		ui.miejsceZdjecia->setPixmap(pix);
		break;
		}
	}
	
}
