#include "pch.h"
#include "tocka.h"
#include <iostream>

void Tocka::set(double d = 0, double s = 0, double v = 0)
{
	duzina = d;
	sirina = s;
	visina = v;
}

void Tocka::get(double *d, double * s, double * v) const
{
	*d = duzina;
	*s = sirina;
	*v = visina;
}
void Tocka::setRandom(int pocetak, int kraj)
{
	
	duzina = pocetak + rand() % (kraj - pocetak);
	sirina = pocetak + rand() % (kraj - pocetak);
	visina = pocetak + rand() % (kraj - pocetak);
}

double Tocka::udaljenost2D(Tocka druga)
{
	return sqrt(pow((duzina - druga.duzina), 2.0) + pow((sirina - druga.sirina), 2.0));

}
double Tocka::udaljenost3D(Tocka druga)
{
	return sqrt(pow((duzina - druga.duzina), 2) + pow((sirina - druga.sirina), 2) + pow((visina - druga.visina), 2));
}

double Tocka::getDuzina(){return this->duzina;}
double Tocka::getSirina(){return this->sirina;}
double Tocka::getVisina(){return this->visina;}