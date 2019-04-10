#include <iostream>
#include <iterator>
#include <ctime>
#include <algorithm>
#include "tocka.h"

#ifndef META_H
#define META_H

class Meta
{

private:

	Tocka doleLivo;
	int sirina;
	int visina;
	bool pogodena;

public:

	void stvoriMetu();
	void pogodenaMeta(double z);

};


#endif 
