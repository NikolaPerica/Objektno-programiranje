#include "pch.h"
#include <iostream>
#include <string>

void razmaci(std::string &recenica)
{
	for (int i = 0; i < recenica.size(); i++)
	{
		if ((recenica[i] == '.' || recenica[i] == ',' || recenica[i] == '!' || recenica[i] == '?') && recenica[i - 1] == ' ')
		{
			recenica.erase(i - 1, 1);
		}

		
	}
	for (int i = 0; i < recenica.size(); i++)
	{
		if ((recenica[i] == '.' || recenica[i] == ',' || recenica[i] == '!' || recenica[i] == '?') && recenica[i + 1] != ' ')
		{
			recenica.insert(i + 1, " ");
		}
	}

}



int main()
{
	std::string recenica;
	std::getline(std::cin, recenica);
	razmaci(recenica);

	std::cout << recenica;
	return 0;
}

