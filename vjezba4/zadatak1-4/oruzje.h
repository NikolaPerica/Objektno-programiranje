#include <iostream>
#include <iterator>
#include <ctime>
#include <algorithm>
#include "tocka.h"


#ifndef ORUZJE_H
#define ORUZJE_H

class Oruzje {
	Tocka polozaj;
	int kapacitet;
	int metci;

public:
	void setPolozaj(double x, double y, double z);
	void getPolozaj(double *x, double *zy, double *z) const;
	double getVisinu();
	void set(int kapacitet);
	void get(int *kapacitet, int *metci);
	void pucaj();
	void napuni();
	int getStanje();
};

#endif