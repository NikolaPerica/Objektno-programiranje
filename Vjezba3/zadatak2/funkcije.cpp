#include "pch.h"
#include <iostream>
#include <vector>
#include "funkcije.h"
#include <algorithm>

std::vector<int> unesi(int min, int max, int n, bool random)
{
	int tmp;
	std::vector<int> novi(n);
	if (random == 0)
	{
		for (int i = 0; i < n; i++)
		{
			novi[i] = rand() % (max - min + 1) + min;

		}

	}
	else
	{	
		std::cout << "Unesite brojeve izmedu "<<min<<" i "<<max<<": \n";
		for (int i = 0; i < n; i++)
		{
			std::cin >> tmp;
			if (tmp<min || tmp>max)
				i--;
			else
				novi[i] = tmp;
		}
	}
	return novi;

}
void print(std::vector<int> niz) 
{
	int n = niz.size();
	for (int i = 0; i < n; i++)
	{
		std::cout << niz[i] << " ";

	}
	std::cout <<"\n";

}

std::vector<int> stvoriNovi(std::vector<int> niz1, std::vector<int> niz2) {

	std::vector<int> novi;

	for (int i = 0; i < niz1.size(); i++) {
		if (!(binary_search(niz2.begin(), niz2.end(), niz1[i])))
		{
			novi.push_back(niz1[i]);
		}
	}

	return novi;
}