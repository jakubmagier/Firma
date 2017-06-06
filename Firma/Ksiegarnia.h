#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Przedsiebiorstwo.h"

using namespace std;

///Klasa Ksiegarnia, pochodna klasy Przedsiebiorstwo
class Ksiegarnia: public Przedsiebiorstwo
{
protected:

	int ilosc_ksiazek; ///<zmienna przechowujaca ilosc ksiazek w ksiegarni

public:

	static int iloscKsiegarni; ///<zmienna przechowujaca ilosc utworzonych obiektow (Ksiegarni)
	///Konstruktor domyslny
	Ksiegarnia();
	///Konstruktor z parametrami
	Ksiegarnia(string nazwa, string wlasciciel, int nr_tel, string adres, int ilosc_pracownikow, int ilosc_ksiazek);
	///Destruktor
	~Ksiegarnia(); 
	///Metoda umozliwiajaca wyswietlenie danych obiektu, zamienia typy danych na string.
	string wyswietlDane();
};