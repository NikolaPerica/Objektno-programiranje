#include"Zbroj.h"
#include<iostream>

int main()
{
	int a;
	Zbroj<int> z('a','b');
	a=z.zbroji();

	std::cout << a;
	getchar();

	return 0;
}