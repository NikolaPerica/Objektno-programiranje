#include <iostream>
#include <string>
#include "hrana.h"

int main(void)
{

	bool povecanaPotrosnja = true;
	Hrana h1("meso", "piletina", 2, 2, 2, 2, 2, "11-11-2019");
	Hrana h2(h1);
	h1.promjeniPotrosnju(povecanaPotrosnja);
	h1.print();
	h1.pratiPotrosnju(3, 2018, 40);
	h1.pratiPotrosnju(4, 2018, 40);
	h1.pratiPotrosnju(5, 2018, 40);
	h1.pratiPotrosnju(6, 2018, 40);
	h1.pratiPotrosnju(3, 2019, 50);
	h1.pratiPotrosnju(4, 2019, 50);
	h1.pratiPotrosnju(5, 2019, 50);
	h1.pratiPotrosnju(6, 2019, 50);
	h1.velikiSkok();


	return 0;
}
