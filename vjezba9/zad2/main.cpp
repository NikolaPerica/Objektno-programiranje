#include"Zbroj.h"
#include<iostream>

int main()
{
	int a;
	char b;

	Zbroj<int> z(2,4);
	a=z.zbroji();

	std::cout << a;
	std::cout << "\n";


	Zbroj<char> t('e', 'f');
	b = t.zbroji();


	return 0;
}