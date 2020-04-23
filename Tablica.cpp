#include "Tablica.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

template<int NumberOfEl, typename Typ>
void Tablica<NumberOfEl, Typ>::Set(Typ Element, int N)
{
	Tab[N] = Element;
}

template<int NumberOfEl, typename Typ>
Typ Tablica<NumberOfEl, Typ>::Get(int N)
{
	return Tab[N];
}

template<int NumberOfEl, typename Typ>
Typ Tablica<NumberOfEl,Typ>::Maksimum()
{
	int max = Tab[0];

	for (int i = 1; i < NumberOfEl; i++)
		if (max < Tab[i])
			max = Tab[i];
	return max;
}

template<int NumberOfEl, typename Typ>
Typ Tablica<NumberOfEl, Typ>::Minimum()
{
	int max = Tab[0];

	for (int i = 1; i < NumberOfEl; i++)
		if (max > Tab[i])
			max = Tab[i];
	return max;
}

template<int NumberOfEl, typename Typ>
void Tablica<NumberOfEl,Typ>::Sortuj()
{
	for (int i = 0; i < NumberOfEl; i++)
		for (int j = 1; j < NumberOfEl - i; j++)
			if (Tab[j - 1] > Tab[j])
				 swap(Tab[j - 1], Tab[j]);
}

template<int NumberOfEl, typename Typ>
void Tablica<NumberOfEl,Typ>::Wyswietl()
{
	for (int i = 0; i < NumberOfEl; i++) {
		std::cout << Tab[i] << std::endl;
	}
}





