#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Przedsiebiorstwo.h"

using namespace std;

///Klasa Drukarnia, pochodna klasy Przedsiebiorstwo
class Drukarnia: public Przedsiebiorstwo
{
protected:

	int ilosc_drukarek; ///<Zmienna przechowujaca liczbe drukarek znajdujacych sie w drukarni

public:	
	///Kontruktor domyslny
	Drukarnia();
	///Kontruktor z parametrami
	Drukarnia(string nazwa, string wlasciciel, int nr_tel, string adres, int ilosc_pracownikow, int ilosc_drukarek);
	///Destruktor
	~Drukarnia();
	///Metoda umozliwiajaca wyswietlenie danych obiektu, zamienia typy danych na string.
	string wyswietlDane();
	static int iloscDrukarni; ///<zmienna przechowujaca ilosc utworzonych obiektow (Drukarni)
};