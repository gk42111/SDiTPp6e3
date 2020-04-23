#include "Tablica.h"
#include "Tablica.cpp"
#include "Osoba.h"

using namespace std;
int main()
{
	//Zad 1
	/*Tablica<10> T;
	cout << T[9]<<endl;
	cout << T.Maksimum() << endl;
	cout << T.Minimum() << endl;
	T.Sortuj();
	T.Wyswietl();*/
	Osoba osoba1("Jan","Kowalski");
	Osoba osoba2("Adam", "Nowak");
	Osoba osoba3("Boleslaw", "Chrobry");
	Osoba osoba4("Stefan", "Batory");
	Osoba osoba5("Jan", "Sobieski");
	Tablica<5, Osoba> T;
	T.Set(osoba1, 0);
	T.Set(osoba2, 1);
	T.Set(osoba3, 2);
	T.Set(osoba4, 3);
	T.Set(osoba5, 4);
	T.Wyswietl();
	T.Sortuj();
	cout << endl;
	T.Wyswietl();
	cin.get();
}