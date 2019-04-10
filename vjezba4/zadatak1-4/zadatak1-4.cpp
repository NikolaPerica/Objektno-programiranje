#include "pch.h"
#include <iostream>
#include <iterator>
#include <random>
#include "tocka.h"
#include "oruzje.h"
#include "meta.h"
#include <vector>

int main()
{
	srand(time(NULL));
	Tocka t1, t2;
	std::vector<Meta> mete;
	t1.setRandom(2, 20);
	t2.set(2, 5, 15);
	std::cout << "2D udaljenost je: " << t1.udaljenost2D(t2) << " a 3D udaljenost je: " << t1.udaljenost3D(t2);

	Oruzje pistolj;
	pistolj.setPolozaj(5, 5, 5);
	pistolj.set(10);
	pistolj.pucaj();
	pistolj.pucaj();
	int stanje = pistolj.getStanje();
	std::cout << stanje<<"\n";
	pistolj.napuni();
	stanje = pistolj.getStanje();
	std::cout << stanje << "\n";
	double z = pistolj.getVisinu();
	std::cout << "Visina pistolja je "<<z << "\n";

	for (int i = 0; i < 10; i++)
	{
		Meta tmp;
		tmp.stvoriMetu();
		mete.push_back(tmp);
	}

	for (int i = 0; i < mete.size(); i++)
	{
		mete[i].pogodenaMeta(z);
	}
}


