#include <iostream>
#include <string>
#include "Drukarnia.h"

using namespace std;

int Drukarnia::iloscDrukarni = 0;

// Konstruktor domyslny obiektu Drukarnia
Drukarnia::Drukarnia()
{
	iloscDrukarni++;
}

// Konstruktor obiektu Drukarnia
Drukarnia::Drukarnia(string nazwa, string wlasciciel, int nr_tel, string adres, int ilosc_pracownikow, int ilosc_drukarek)
{
	this->nazwa = nazwa;
	this->wlasciciel = wlasciciel;
	this->nr_tel = nr_tel;
	this->adres = adres;
	this->ilosc_pracownikow = ilosc_pracownikow;
	this->ilosc_drukarek = ilosc_drukarek;
	iloscDrukarni++;
}

Drukarnia::~Drukarnia()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor obiektu Drukarnia" << endl;
#endif
	iloscDrukarni--;
	cout << "Drukarnie:" << iloscDrukarni << endl;
}

string Drukarnia::wyswietlDane()
{
	string dane = Przedsiebiorstwo::wyswietlDane();
	string liczba_drukarek = to_string(ilosc_drukarek);
	return string("Drukarnia\n" + dane + "\n" + liczba_drukarek);
}
