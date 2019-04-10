#include "pch.h"
#include <iostream>
#include <vector>
#include "funkcije.h"

int main()
{
	int n=5;
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
	std::vector<int> niz(n);
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
	
	niz = unesi(min, max, n, random);
	print(niz, n);

}

