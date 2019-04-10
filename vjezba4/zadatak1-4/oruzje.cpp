#include "pch.h"
#include "oruzje.h"

void Oruzje::setPolozaj(double x, double y, double z)
{
	polozaj.set(x, y, z);
}

void Oruzje::getPolozaj(double *d, double *s, double *v) const
{
	double x, y, z;
	polozaj.get(&x, &y, &z);
	*d = x;
	*s = y;
	*v = z;
}

void Oruzje::set(int okvir)
{
	kapacitet = okvir;
	metci = okvir;
}

void Oruzje::get(int * okvir, int * metak)
{
	*okvir = kapacitet;
	*metak = metci;
}

void Oruzje::pucaj()
{
	metci-=1;
}

void Oruzje::napuni()
{
	metci = kapacitet;
}
 int Oruzje::getStanje(){return this->metci;}
 double Oruzje::getVisinu()
 {
	 double x = polozaj.getVisina();
	 return x;
 }