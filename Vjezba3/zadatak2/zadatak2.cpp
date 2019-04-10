#include "pch.h"
#include <iostream>
#include <vector>
#include "funkcije.h"
#include <algorithm>

int main()
{
	int n = 5;
	char odabir;
	bool random;
	int min = 0, max = 100;
	std::cout << "Zelite li sami odrediti velicinu y za da n za ne: ";
	std::cin >> odabir;
	if (odabir == 'y')
	{
		std::cout << "Unesite velicinu: ";
		std::cin >> n;

	}
	std::vector<int> niz1(n);
	std::vector<int> niz2(n);
	std::cout << "Zelite li sami odrediti granice y za da n za ne: ";
	std::cin >> odabir;
	if (odabir == 'y')
	{
		std::cout << "Unesite min: ";
		std::cin >> min;
		std::cout << "Unesite max: ";
		std::cin >> max;
	}
	std::cout << "Zelite li sami unijeti brojeve 1 za da 0 za ne: ";
	std::cin >> random;

	niz1 = unesi(min, max, n, random);
	sort(niz1.begin(),niz1.end());
	print(niz1);
	niz2 = unesi(min, max, n, random);
	sort(niz2.begin(), niz2.end());
	print(niz2);
	std::vector<int> niz3 = stvoriNovi(niz1, niz2);
	print(niz3);
}

