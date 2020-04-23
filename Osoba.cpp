#include "Osoba.h"
#include <string>

Osoba::Osoba()
{
}

Osoba::Osoba(string Imie, string Nazwisko)
{
	this->Imie = Imie;
	this->Nazwisko = Nazwisko;
}

std::ostream & operator<<(ostream & wyjscie,const Osoba & o)
{
	 wyjscie << "Imie: " << o.Imie <<"\tNazwisko:"<< o.Nazwisko << endl;
	 return wyjscie;
}
