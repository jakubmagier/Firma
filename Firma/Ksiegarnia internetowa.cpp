#include <iostream>
#include <string>
#include <fstream>
#include "Ksiegarnia internetowa.h"

using namespace std;

int KsiegarniaInternetowa::iloscKsiegarniInternetowych = 0;

//Konstruktor domyslny obiektu Ksiegarnia internetowa

KsiegarniaInternetowa::KsiegarniaInternetowa()
{
	iloscKsiegarniInternetowych++;
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
	iloscKsiegarniInternetowych++;
}	

KsiegarniaInternetowa::~KsiegarniaInternetowa()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor obiektu Ksiegarnia Internetowa" << endl;
#endif
}

string KsiegarniaInternetowa::wyswietlDane()
{
	string dane = Przedsiebiorstwo::wyswietlDane();
	string liczba_ksiazek = to_string(ilosc_ksiazek);
	return string("Ksiegarnia internetowa\n" + dane + "\n" + liczba_ksiazek);
}