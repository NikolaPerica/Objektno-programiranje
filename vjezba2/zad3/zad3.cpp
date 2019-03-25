#include "pch.h"
#include <iostream>

typedef struct Vector {
	int velicina;
	int kapacitet;
	int* niz;

	void vector_new(int n) {

		velicina = 0;
		kapacitet = n;
		niz = new int[n];

	}
	void vector_delete() {

		delete[] niz;
		velicina = NULL;
		kapacitet = NULL;
		niz = 0;

	}
	void vector_push_back(int n) {


		if (velicina == kapacitet) {
			uvecaj_vector();
		}


		niz[velicina] = n;
		velicina++;
	}
	void uvecaj_vector()
	{
		kapacitet = kapacitet * 2;
		int* novi = new int[kapacitet];

		for (int i = 0; i < this->velicina; i++) {
			novi[i] = niz[i];
		}

		delete[] niz;

		niz = novi;

	}

	int vector_front()
	{
		return niz[0];
	}
	int vector_back()
	{
		return niz[velicina-1];
	}



	int vector_size()
	{
		return velicina;
	}

	void vector_pop_back() {

		niz[velicina - 1] = NULL;
		velicina--;

	}


}vector;

int main()
{
	int n = 5;
	vector test;
	
	vector test1;
	test.vector_new(5);
	test.vector_push_back(1);
	test.vector_push_back(2);
	test.vector_push_back(3);
	test.vector_push_back(4);
	test.vector_push_back(5);
	test.vector_push_back(6);

	for (int i = 0; i < test.velicina; i++)
	{
		std::cout << test.niz[i] << " ";
	}
	std::cout <<  " \n";
	
	std::cout << test.vector_front()<< " \n";
	std::cout << test.vector_back() << " \n";
	std::cout << test.vector_size() << " \n";

	
	test1.vector_new(3);
	test1.vector_push_back(5);
	test1.vector_push_back(4);
	test1.vector_push_back(3);
	test1.vector_push_back(2);
	test1.vector_push_back(1);
	test1.vector_push_back(0);
	
	for (int i = 0; i < test1.velicina; i++)
	{
		std::cout << test1.niz[i] << " ";
	}
	std::cout << " \n";
	test1.vector_pop_back();

	for (int i = 0; i < test1.velicina; i++)
	{
		std::cout << test1.niz[i] << " ";
	}
	std::cout << " \n";
	std::cout << test1.vector_front() << " \n";
	std::cout << test1.vector_back() << " \n";
	std::cout << test1.vector_size() << " \n";
	test.vector_delete();
	test1.vector_delete();
	for (int i = 0; i < test1.velicina; i++)
	{
		std::cout << test1.niz[i] << " ";
	}
	std::cout << test1.vector_front() << " \n";
	std::cout << test1.vector_back() << " \n";
	std::cout << test1.vector_size() << " \n";
}

