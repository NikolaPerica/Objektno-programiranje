#include <iostream>
#include <string>
#include "myError.h"

#include <fstream>

int unesiBroj()
{
	int br;
	std::cout << "Unesite broj: ";
	std::cin >> br;
	if (std::cin.fail())
	{
		throw brojError();
	}

	return br;
}

char unesiOperator()
{
	std::string op;
	std::cout << "Unesite operaciju: ";
	std::cin >> op;

	if(op != "+" &&	op != "-" && op != "*" && op != "/")
	{
		
		throw operatorError();
	}
	return op[0];
}

double izracunaj(int a, int b, char opr)
{
	if (b == 0 && opr == '/')
	{
		throw djeljenjeError();
	}
	
	switch (opr)
	{
	case('+'):
		return a + b;
	case('-'):
		return a - b;
	case('*'):
		return a * b;
	case('/'):
		return a / b;
	default:
		throw myError("Problem s operatorom!");
	}
}

int main()
{
	try
	{
		int br1 = unesiBroj();
		char op = unesiOperator();
		int br2 = unesiBroj();
		
		std::cout << izracunaj(br1, br2, op);
	}
	catch (myError& calculationError)
	{
		calculationError.zapisiGresku("error.txt");
	}

	system("pause");
	return 0;
}