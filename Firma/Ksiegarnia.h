#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Przedsiebiorstwo.h"

using namespace std;

///Klasa Ksiegarnia, pochodna klasy Przedsiebiorstwo
class Ksiegarnia: public Przedsiebiorstwo
{
	int typ = 1;

protected:

	int ilosc_ksiazek; ///<zmienna przechowujaca ilosc ksiazek w ksiegarni

public:
	///Konstruktor domyslny
	Ksiegarnia();
	///Konstruktor z parametrami
	Ksiegarnia(string nazwa, string wlasciciel, int nr_tel, string adres, int ilosc_pracownikow, int ilosc_ksiazek);
	///Destruktor
	~Ksiegarnia(); 
	///Metoda umozliwiajaca wyswietlenie danych obiektu, zamienia typy danych na string.
	string wyswietlDane();
	///Metoda umozliwiajaca wyswietlenie typu obiektu.
	int wyswietlTyp();
	///Metoda umozliwiajaca wpisanie danych z pliku do obiektu
	void wpiszDaneZPliku(ifstream& wejscie);
	///Metoda umozliwiajaca wyswietlenie nazwy obiektu.
	string wyswietlNazwe();
};