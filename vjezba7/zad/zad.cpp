#include "kolaci.h"
#include "mesni.h"
#include "mljecni.h"
#include "vege.h"
#include "pch.h"
#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::vector<Sir> sirevi;


	Sir gauda("sir", "gauda", 3, 5, 10, 5, 8, "01-01-2021", 2, 10, "gauda");
	Sir trapist("sir", "trapist", 3, 5, 10, 5, 8, "01-01-2021", 2, 15, "trapist");

	sirevi.push_back(gauda);

	sirevi.push_back(trapist);

	for (int i = 0; i < sirevi.size; i++)
	{
		std::cout << sirevi[i];
	}
}
