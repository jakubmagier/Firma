#include <iostream>
#include <string>
#include "Ksiegarnia.h"

using namespace std;

// Konstruktor domyslny obiektu Ksiegarnia
Ksiegarnia::Ksiegarnia()
{
}

// Konstruktor obiektu Ksiegarnia
Ksiegarnia::Ksiegarnia(string nazwa, string wlasciciel, int nr_tel, string adres, int ilosc_pracownikow, int ilosc_ksiazek)
{
	this->nazwa = nazwa;
	this->wlasciciel = wlasciciel;
	this->nr_tel = nr_tel;
	this->adres = adres;
	this->ilosc_pracownikow = ilosc_pracownikow;
	this->ilosc_ksiazek = ilosc_ksiazek;
}

Ksiegarnia::~Ksiegarnia()
{
}

string Ksiegarnia::wyswietlDane()
{
	string dane = Przedsiebiorstwo::wyswietlDane();
	string liczba_ksiazek = to_string(ilosc_ksiazek);
	return string("\b\b\bKsiegarnia:\b\b\b\n" + dane + "\n" + "\b\bLiczbaKsiazek:\n" + liczba_ksiazek +"\n");
}

int Ksiegarnia::wyswietlTyp()
{
	return typ;
}

void Ksiegarnia::wpiszDaneZPliku(ifstream& wejscie) 
{
	Przedsiebiorstwo::wpiszDaneZPliku(wejscie);
	string zmienna_pomocnicza;
	int i = 0;
	wejscie >> zmienna_pomocnicza;
	wejscie >> i;
	ilosc_ksiazek = i;
}
