#pragma once
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

///Klasa abstrakcyjna
class Przedsiebiorstwo
{
protected:	
	string nazwa; ///<zmienna przechowujaca nazwe przedsiebiorstwa
	string wlasciciel; ///<zmienna przechowujaca nazwisko wlasciciela
	string adres; ///<zmienna przechowujaca adres firmy
	int nr_tel;	///<zmienna przechowujaca telefon do firmy
	int ilosc_pracownikow; ///<zmienna przechowujaca ilosc pracownikow firmy
	static int iloscPrzedsiebiorstw; ///<zmienna przechowujaca ilosc utworzonych obiektow (Przedsiebiorstw)

public:
	///Kontruktor domyslny
	Przedsiebiorstwo();
	///Destruktor wirtualny
	virtual ~Przedsiebiorstwo();
	///Funkcja wirtualna
	/**
	Umozliwia wyswietlenie danych obiektu, zamienia typy danych na string.
	*/
	virtual string wyswietlDane();
};
