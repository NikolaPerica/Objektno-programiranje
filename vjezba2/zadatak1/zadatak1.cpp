#include "pch.h"
#include <iostream>
#include <algorithm>

void unesi(int* &niz, int size)
{
	int tmp;
	std::cout << "Unesi brojeve: \n";

	for (int i = 0; i < size; i++)
	{

		std::cin >> tmp;
		if (tmp < 1 || tmp>9)
			i--;
		else
			niz[i] = tmp;

	}
}

void sortiraj(int* &niz, int size)
{
	std::sort(niz, niz + size);

}
void ispisi(int* &niz, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << niz[i] << " ";
	}
	std::cout << "\n";
}

int provjera(int* &niz, int size, int* brojaci)
{
	int fali = 0;
	for (int i = 0; i < size; i++)
	{
		brojaci[niz[i] - 1] += 1;
	}

	for (int i = 1; i < 10; i++)
	{

		if (brojaci[i - 1] == 0)
		{
			fali++;
		}
	}
return fali;
}

int* nadopuni(int* &niz, int size, int* brojaci, int nedostaje)
{

	int duljina = size + nedostaje;

	int* gotovi = new int[duljina];
	for (int i = 0; i < size; i++)
	{
		gotovi[i] = niz[i];
	}

	int next = 0;
	for (int i = 0; i < 10; i++)
	{
		if (brojaci[i] == 0)
		{
			gotovi[size + next] = i + 1;
			next++;

		}
	}
	sortiraj(gotovi, duljina);
	return gotovi;
}
int main()
{

	int size = 0;
	int tmp = 0;
	int brojaci[9] = { 0 };
	int nedostaje = 0;
	std::cout << "Unesi velicinu niza: ";

	std::cin >> size;

	int *niz = new int[size];


	unesi(niz, size);
	ispisi(niz, size);
	sortiraj(niz, size);
	ispisi(niz, size);
	nedostaje = provjera(niz, size, brojaci);

	int *nadopunjeni = nadopuni(niz, size, brojaci, nedostaje);

	ispisi(nadopunjeni, size + nedostaje);
	delete[] niz;
	delete[] nadopunjeni;
	return 0;

	getchar();
}

