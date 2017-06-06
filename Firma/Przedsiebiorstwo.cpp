#include <iostream>
#include <string>
#include <fstream>
#include "Przedsiebiorstwo.h"

using namespace std;

int Przedsiebiorstwo::iloscPrzedsiebiorstw = 0;

Przedsiebiorstwo::Przedsiebiorstwo() 
{
#ifdef _DEBUG  
	cout << "Wywolano konstruktor domyslny obiektu Przedsiebiorstwo" << endl;
#endif
	iloscPrzedsiebiorstw++;
}

Przedsiebiorstwo::~Przedsiebiorstwo()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor obiektu Przedsiebiorstwo" << endl;
#endif
	iloscPrzedsiebiorstw--;
}

string Przedsiebiorstwo::wyswietlDane()
{
	string nr = to_string(nr_tel);
	string liczba_pracownikow = to_string(ilosc_pracownikow);
	return string(nazwa + "\n" + wlasciciel + "\n" + adres + "\n" + nr + "\n" + liczba_pracownikow);
}