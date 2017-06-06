#pragma once
#include <iostream>
#include <string>
#include "Ksiegarnia.h"

using namespace std;

///Klasa Ksiegarnia Internetowa, pochodna klasy Ksiegarnia
class KsiegarniaInternetowa : public Ksiegarnia
{
	
public:
	///Kontruktor domyslny
	KsiegarniaInternetowa();
	///Konstruktor z parametrami
	KsiegarniaInternetowa(string nazwa, string wlasciciel, int nr_tel, string adres, int ilosc_pracownikow, int ilosc_ksiazek);
	///Destruktor
	~KsiegarniaInternetowa();
	///Metoda umozliwiajaca wyswietlenie danych obiektu, zamienia typy danych na string.
	string wyswietlDane();
	static int iloscKsiegarniInternetowych; ///<zmienna przechowujaca ilosc utworzonych obiektow (Ksiegarni internetowych)
};