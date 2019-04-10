#include "pch.h"
#include <iostream>
#include <vector>
#include "funkcije.h"

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
void print(std::vector<int> print, int n) 
{
	for (int i = 0; i < n; i++)
	{
		std::cout << print[i] << " ";

	}
	std::cout <<"\n";

}