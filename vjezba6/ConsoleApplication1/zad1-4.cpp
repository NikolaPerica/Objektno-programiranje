#include "pch.h"
#include <iostream>
#include "vec3.h"

int main()
{
	
    
	OOP::Vec3 v1,v2,v3;
	
	std::cout << "unesite v1 \n";
	std::cin >> v1;
	std::cout << "vektor1: ";
	std::cout << v1;

	std::cout << "unesite v2 \n";
	std::cin >> v2;
	std::cout << "vektor2: ";
	std::cout << v2;

	v3 = v1;
	std::cout << "v3 je v1 : ";
	std::cout << v3;

	std::cout << "v1+v2 ";
	std::cout << v1+v2;


	std::cout << "v1-v2 ";
	std::cout << v1-v2;


	std::cout << "v1 * 2: ";
	std::cout << v1 * 2;

	std::cout << "v1 / 4: ";
	std::cout << v1 / 4;

	std::cout << "v1 * v2: ";
	std::cout << v1*v2 << "\n";

	std::cout << "v1[2]: ";
	std::cout << v1[2] << "\n";

	std::cout << "normalizrani v1: ";
	normalizirajVektor(v1);
	std::cout << v1 << "\n";

	return 0;
}
