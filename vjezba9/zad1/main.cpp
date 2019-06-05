#include"stack.h"
#include<iostream>

int main()
{
	
	std::cout << "valjda radi";
	
	Stog<int> test(3);
	std::cout << "prazan? "<< test.isEmpty();
	std::cout.flush();
}