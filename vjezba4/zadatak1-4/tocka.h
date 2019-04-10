#include <iostream>
#include <iterator>
#include <ctime>
#include <algorithm>


#ifndef TOCKA_H
#define TOCKA_H

class Tocka {
	double duzina;
	double sirina;
	double visina;

public:
	void set(double x, double y, double z);
	void get(double* x, double* y, double* z) const;
	void setRandom(int pocetak, int kraj);
	double udaljenost2D(Tocka druga);
	double udaljenost3D(Tocka druga);
	double getDuzina();
	double getSirina();
	double getVisina();
};

#endif