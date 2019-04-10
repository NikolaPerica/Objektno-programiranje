
#include "tocka.h"
#include "meta.h"
#include "pch.h"
#include <iostream>
#include <iterator>
#include <ctime>
#include <algorithm>

void Meta::stvoriMetu()
{
	doleLivo.setRandom(1, 50);
	sirina = 20;
	visina = 5;
}
void Meta::pogodenaMeta(double z)
{

	double pocetnaVisina;
	pocetnaVisina = doleLivo.getVisina();
	std::cout << "Pocetna visina mete je: "<<pocetnaVisina << " a krajna "<< pocetnaVisina + visina<<"\n";
	if (z > pocetnaVisina && z < (pocetnaVisina + visina))
	{
		pogodena = true;
		std::cout << "Meta pogodena\n";
	}
	else
	{
		pogodena = false;
		std::cout << "Meta nepogodena\n";
	}
}
