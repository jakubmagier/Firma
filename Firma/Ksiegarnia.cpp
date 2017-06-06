#include <iostream>
#include <string>
#include "Ksiegarnia.h"

using namespace std;

int Ksiegarnia::iloscKsiegarni = 0;

// Konstruktor domyslny obiektu Ksiegarnia
Ksiegarnia::Ksiegarnia()
{
	iloscKsiegarni++;
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
	iloscKsiegarni++;
}

Ksiegarnia::~Ksiegarnia()
{
#ifdef _DEBUG

	cout << "Wywolano destruktor obiektu Ksiegarnia" << endl;

#endif
	iloscKsiegarni--;
	cout<<"Ksiegarnie:"<<iloscKsiegarni<<endl;
}

string Ksiegarnia::wyswietlDane()
{
	string dane = Przedsiebiorstwo::wyswietlDane();
	string liczba_ksiazek = to_string(ilosc_ksiazek);
	return string("Ksiegarnia\n" + dane + "\n" + liczba_ksiazek);
}