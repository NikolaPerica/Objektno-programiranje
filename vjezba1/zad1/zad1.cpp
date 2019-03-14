#include "pch.h"
#include <iostream>


int main()
{

	int size = 0;
	int tmp = 0;
	int brojaci[10] = { 0 };




	std::cout << "Unesi velicinu niza: ";

	std::cin >> size;

	int *niz = new int[size];
	std::cout << "Unesi brojeve: \n";

	for (int i = 0; i < size; i++)
	{
		std::cin >> tmp;
		if (tmp < 1 || tmp>9)
			i--;
		else
			niz[i] = tmp;
	}

	for (int i = 0; i < size; i++)
	{

		brojaci[niz[i] - 1] += 1;

	}
	for (int i = 0; i < 9; i++)
	{
		std::cout << "Broj " << i + 1 << " se ponavlja " << brojaci[i] << " puta\n";
	}


	delete[] niz;
	return 0;


}

