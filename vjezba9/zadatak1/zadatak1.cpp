// zadatak1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "stack.h"
#include <iostream>

int main()
{
	
	Stog<int> stog(5);

	stog.push(1);
	stog.push(10);
	stog.push(20);
	stog.push(30);
	stog.push(40);
	stog.push(50);

	std::cout << "Na vrhu stoga: "<<stog.naVrhu()<< "\n";

	std::cout << stog.pop() << "\n";
	std::cout << stog.pop() << "\n";
	std::cout << stog.pop() << "\n";
	std::cout << stog.pop() << "\n";
	std::cout << stog.pop() << "\n";
	std::cout << stog.pop() << "\n";
	std::cout << stog.pop() << "\n";
	std::cout << stog.pop() << "\n";

	return 0;
}


