#include "pch.h"
#include <iostream>


int nadi(int *niz, int size) {
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum = niz[i] % 10 + (niz[i] / 100) % 10;
		//std::cout << sum;
		if (sum == 5){
			int& iref = niz[i];
			return iref;
		}
	}
	return 0;
}

int main() {
	int size = 0;
	int tmp = 0;
	int broj;

	std::cout << "Unesi velicinu niza: ";

	std::cin >> size;

	int *niz2 = new int[size];
	std::cout << "Unesi brojeve: \n";

	for (int i = 0; i < size; i++)
	{
		std::cin >> tmp;
		if (tmp > 9999 || tmp<999)
			i--;
		else
			niz2[i] = tmp;
	}
	broj = nadi(niz2,size);
	std::cout << "Broj je: "<< broj <<"\n";
	broj++;
	std::cout << "lvalue inkrement: " << broj << "\n";
	return 0;
}

