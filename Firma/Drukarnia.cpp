#include <iostream>
#include <string>
#include "Drukarnia.h"

using namespace std;

// Konstruktor domyslny obiektu Drukarnia
Drukarnia::Drukarnia()
{
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
}

Drukarnia::~Drukarnia()
{
}

string Drukarnia::wyswietlDane()
{
	string dane = Przedsiebiorstwo::wyswietlDane();
	string liczba_drukarek = to_string(ilosc_drukarek);
	return string("\b\b\bDrukarnia:\b\b\b\n" + dane + "\n" + "\b\bLiczbaDrukarek:\n" + liczba_drukarek + "\n");
}

int Drukarnia::wyswietlTyp()
{
	return typ;
}

void Drukarnia::wpiszDaneZPliku(ifstream& wejscie)
{
	Przedsiebiorstwo::wpiszDaneZPliku(wejscie);
	string zmienna_pomocnicza;
	int i = 0;
	wejscie >> zmienna_pomocnicza;
	wejscie >> i;
	ilosc_drukarek = i;
}

string Drukarnia::wyswietlNazwe()
{
	return nazwa;
}
