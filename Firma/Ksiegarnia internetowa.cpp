#include <iostream>
#include <string>
#include <fstream>
#include "Ksiegarnia internetowa.h"

using namespace std;

//Konstruktor domyslny obiektu Ksiegarnia internetowa
KsiegarniaInternetowa::KsiegarniaInternetowa()
{
}

//Konstruktor obiektu Ksiegarnia internetowa
KsiegarniaInternetowa::KsiegarniaInternetowa(string nazwa, string wlasciciel, int nr_tel, string adres, int ilosc_pracownikow, int ilosc_ksiazek)
{
	this->nazwa = nazwa;
	this->wlasciciel = wlasciciel;
	this->nr_tel = nr_tel;
	this->adres = adres;
	this->ilosc_pracownikow = ilosc_pracownikow;
	this->ilosc_ksiazek = ilosc_ksiazek;
}	

KsiegarniaInternetowa::~KsiegarniaInternetowa()
{
}

string KsiegarniaInternetowa::wyswietlDane()
{
	string dane = Przedsiebiorstwo::wyswietlDane();
	string liczba_ksiazek = to_string(ilosc_ksiazek);
	return string("\b\b\bKsiegarniaInternetowa:\b\b\b\n" + dane + "\n" + "\b\bLiczbaKsiazek:\n" + liczba_ksiazek + "\n");
}

int KsiegarniaInternetowa::wyswietlTyp()
{
	return typ;
}

void KsiegarniaInternetowa::wpiszDaneZPliku(ifstream& wejscie)
{
	Przedsiebiorstwo::wpiszDaneZPliku(wejscie);
	string zmienna_pomocnicza;
	int i = 0;
	wejscie >> zmienna_pomocnicza;
	wejscie >> i;
	ilosc_ksiazek = i;
}

string KsiegarniaInternetowa::wyswietlNazwe()
{
	return nazwa;
}
