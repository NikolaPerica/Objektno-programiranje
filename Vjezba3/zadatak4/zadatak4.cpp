#include "pch.h"
#include <iostream>
#include <vector>
#include <time.h> 


int main()
{
	srand(time(NULL));
	int uzima = 1;
	std::vector<int> matches(0);
	while (matches.size() < 20)

	{
		std::cout << "Sibica u igri: "<<21 - matches.size()<<"\n";
		uzima= rand() % (3 - 1 + 1) + 1;
		if (matches.size()==17)
		{
			std::cout << "CPU je uzea 3 \n";
			for (int i = 0; i < 3; i++)
			{
				matches.push_back(1);
			}
		}
		else if (matches.size() == 18)
		{
			std::cout << "CPU je uzea 2 \n";
			for (int i = 0; i < 2; i++)
			{
				matches.push_back(1);
			}
		}
		else if (matches.size() == 19)
		{
			std::cout << "CPU je uzea 1 \n";
			matches.push_back(1);
			
		}
		else if (matches.size() == 20)
		{

			std::cout << "CPU je izgubija \n";
			exit(0);
		}
		else 
		{
			std::cout << "CPU je uzea "<<uzima<<" \n";
			for (int i = 0; i < uzima; i++)
			{
				matches.push_back(1);
			}
		}
		if (matches.size() == 20)
		{
			std::cout << "Igrac je izgubija \n";
			exit(0);
		}
		std::cout << "Sibica u igri: " << 21 - matches.size() << " \n";
		std::cout << "igrac uzima: ";
		std::cin >> uzima;
		while ((uzima < 1 || uzima>3) && uzima > 21 - matches.size())
		{
			if (21 - matches.size() < 3) 
			{
				std::cout << "mozete uzeti najvise "<<21 - matches.size() <<"sibica\n";
			}
			std::cout << "igrac uzima: ";
			std::cin >> uzima;
		}
		for (int i = 0; i < uzima; i++)
		{
			matches.push_back(1);
		}
	}
	return 0;
		
}

