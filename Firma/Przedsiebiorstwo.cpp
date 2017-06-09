#include <iostream>
#include <string>
#include <fstream>
#include "Przedsiebiorstwo.h"

using namespace std;

Przedsiebiorstwo::Przedsiebiorstwo() 
{
}

Przedsiebiorstwo::~Przedsiebiorstwo()
{
}

string Przedsiebiorstwo::wyswietlDane()
{
	string nr = to_string(nr_tel);
	string liczba_pracownikow = to_string(ilosc_pracownikow);
	return string("\b\bNazwa:\n" + nazwa + "\n" + "\b\bWlasciciel:\n" + wlasciciel + "\n" + "\b\bAdres:\n" + adres + "\n" + "\b\bNrTelefonu:\n" + nr + "\n" + "\b\bLiczbaPracownikow:\n" + liczba_pracownikow);
}

void Przedsiebiorstwo::wpiszDaneZPliku(ifstream & wejscie)
{
	string zmienna_pomocnicza, nazwa, wlasciciel, adres;
	int nr, ilosc_pracownikow;
	wejscie >> zmienna_pomocnicza;
	wejscie >> zmienna_pomocnicza;
	wejscie >> nazwa;
	wejscie >> zmienna_pomocnicza;
	wejscie >> wlasciciel;
	wejscie >> zmienna_pomocnicza;
	wejscie >> adres;
	wejscie >> zmienna_pomocnicza;
	wejscie >> nr;
	wejscie >> zmienna_pomocnicza;
	wejscie >> ilosc_pracownikow;
	this->nazwa = nazwa;
	this->wlasciciel = wlasciciel;
	this->adres = adres;
	this->nr_tel= nr;
	this->ilosc_pracownikow = ilosc_pracownikow;
}



 