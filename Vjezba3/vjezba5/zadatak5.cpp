#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>
typedef struct Producent {

	std::string name;
	std::string movie;
	int year;


}producent;

void unesiProducenta(std::vector<producent> &producenti, int n) 
{

	producent temp;

	for (int i = 0; i < n; i++) {

		std::cout << "Ime: ";
		std::cin >> temp.name;
		std::cout << "Film: ";
		std::cin >> temp.movie;
		std::cout << "Godina: ";
		std::cin >> temp.year;
		producenti.push_back(temp);
	}

}

void najzastupljenijiProducent(std::vector<producent> producenti)
{
	std::map <std::string, int> ucestalost;
	int size = producenti.size();

	for (int i = 0; i < size; i++)
	{
		ucestalost[producenti[i].name]++;
	}
	int max = 0;
	for (auto &i : ucestalost)
	{
		if (i.second > max)
		{
			max = i.second;
		}
	}
	std::cout << "Najzastupljeniji producenti su: \n" ;
	for (auto& i : ucestalost)
	{
		if (i.second == max)
		{
			std::cout <<i.first<< "\n";
		}
	}
			

}



int main()
{
	std::vector<producent> Producenti;

	int n = 1;

	std::cout << "Odaberi koliko filmova: ";
	std::cin >> n;
	unesiProducenta(Producenti, n);
	najzastupljenijiProducent(Producenti);

	return 0;

}

