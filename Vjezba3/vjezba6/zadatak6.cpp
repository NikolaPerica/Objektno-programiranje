#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>

bool uvjet(std::string recenica)
{
	int i = 0;
	int size = recenica.size();

	while (recenica[i])
	{
		if (islower(recenica[i]))
			return false;
		i++;
	}

	if (size > 20)
		return false;

	return true;
}

void brojeviuSlova(std::string recenica)
{
	
	int num = 0;
	
	char znak;
	std::string novi = "";
	
	for (int i = 0; i < recenica.size(); i ++)
	{
		
		if (isdigit(recenica[i]))
		{
			num = recenica[i]-'0';
			znak = recenica[i + 1];
			for (int j = 0; j < num; j++)
			{
				novi += znak;
			}
			i++;
		}
		else 
		{
			znak = recenica[i];
			novi+=znak;
		}
	}
	
	std::cout << novi << "\n";
	
}

void slovauBrojeve(std::string recenica)
{
	char znak = 'a';
	std::string novi = "";
	for (int i = 0; i < recenica.length(); i++) {

		znak = recenica[i];
		int brojac = 1;
		int j = i;
		while (recenica[j] == recenica[j + 1]) {
			brojac++;
			j =j + 1;
		}
		if (brojac > 1) 
		{
			std::string insert = std::to_string(brojac) + znak;
			i = i + brojac-1;
			
			novi  += insert;
			brojac = 1;

		}
		else
		{
			novi.append(1, znak);
		}




	}
	std::cout << novi << "\n";





}



int main()
{
	bool imaBroj = true;
	std::vector<std::string> recenice;
	std::string recenica;
	int n = 0;

	std::cout << "How many sentences do you want: ";
	std::cin >> n;

	if (n <= 0) {
		std::cout << "Number must be greater than 0!";
		return 0;
	}

	//ignore last \n that user entered from last input for number of sentences
	std::cin.ignore(1, '\n');

	for (int i = 0; i < n; i++) {
		std::cout << "Enter sentence " << i << ". sentence: ";

		//read whole line until \n and save it in string "s"
		std::getline(std::cin, recenica);
		while (!uvjet(recenica))
		{
			std::cout << "unesi ponovo: ";
			std::cin >> recenica;
		}
		//push back string s into vector
		recenice.push_back(recenica);
	}
	for (std::vector<int>::size_type i = 0; i != recenice.size(); i++) {
		
		for (std::vector<int>::size_type j = 0; j != recenice[i].size(); j++) {
			if (isdigit(recenice[i][j]))
			{
				brojeviuSlova(recenice[i]);
				
			}
		}
		if (!imaBroj)
		{
			slovauBrojeve(recenice[i]);
		}


	}

	return 0;
}
