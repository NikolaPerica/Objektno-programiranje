#include "pch.h"
#include <iostream>

void unesi(int* &niz, int size)
{
	std::cout << "Unesi brojeve: \n";

	for (int i = 0; i < size; i++)
	{

		std::cin >> niz[i];

	}
}
void ispisi(int* &niz, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << niz[i] << " ";
	}
	std::cout << "\n";
}
void parnepar(int* &niz, int size)
{
	int tmp = 0;
	for (int i = 0; i < size; i++)
	{

		if (niz[i] % 2 != 0)
		{

			for (int j = size - 1; j > i; j--)
			{
				
				if (niz[j] % 2 == 0)
				{
					tmp = niz[i];
					niz[i] = niz[j];
					niz[j] = tmp;
					
				}
			}

		}


	}

}

int main()
{

	int size = 0;
	int nedostaje = 0;
	std::cout << "Unesi velicinu niza: ";

	std::cin >> size;

	int *niz = new int[size];

	unesi(niz, size);
	ispisi(niz, size);
	parnepar(niz, size);
	ispisi(niz, size);
	delete[] niz;

	return 0;

	getchar();
}