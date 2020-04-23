#pragma once
#include "Osoba.h"
template<int NumberOfEl, typename Typ> class Tablica
{private:
	Typ Tab[NumberOfEl];
public:
	Tablica() {}
	void Set(Typ Element, int N);
	Typ Get(int N);
	int operator[](size_t el) { return Tab[el]; }
	Typ Maksimum();
	Typ Minimum();
	void Sortuj();
	void Wyswietl();
};