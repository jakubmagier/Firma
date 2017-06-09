#pragma once
#include <iostream>
#include <string>
#include "Ksiegarnia.h"

using namespace std;

///Klasa Ksiegarnia Internetowa, pochodna klasy Ksiegarnia
class KsiegarniaInternetowa : public Ksiegarnia
{
	int typ = 2;

public:
	///Kontruktor domyslny
	KsiegarniaInternetowa();
	///Konstruktor z parametrami
	KsiegarniaInternetowa(string nazwa, string wlasciciel, int nr_tel, string adres, int ilosc_pracownikow, int ilosc_ksiazek);
	///Destruktor
	~KsiegarniaInternetowa();
	///Metoda umozliwiajaca wyswietlenie danych obiektu, zamienia typy danych na string.
	string wyswietlDane();
	///Metoda umozliwiajaca wyswietlenie typu obiektu.
	int wyswietlTyp();
	///Metoda umozliwiajaca wpisanie danych z pliku do obiektu
	void wpiszDaneZPliku(ifstream & wejscie);
};