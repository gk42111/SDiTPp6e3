#pragma once
#include <iostream>

using namespace std;
class Osoba
{
private:
	string Imie;
	string Nazwisko;
public:
	Osoba();
	Osoba(string,string);
	bool operator< (Osoba const &q) const { return Nazwisko < q.Nazwisko; }
	bool operator< (string const &q) const { return Nazwisko < q; };
	bool operator> (Osoba const &q) const { return Nazwisko > q.Nazwisko; }
	bool operator> (string const &q) const { return Nazwisko > q; };
	friend std::ostream & operator<<(ostream &wyjscie, const Osoba &o);

};

