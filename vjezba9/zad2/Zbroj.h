#pragma once
#ifndef ZBROJ_H
#define ZBROJ_H
#include<iostream>
#include <ctype.h>
template <class T>
	class Zbroj {
	protected:
		T x;
		T y;

	public:
		Zbroj(T a, T b);
		T zbroji() { return x + y; };
};


template <class T>

Zbroj<T>::Zbroj(T a, T b)
{
	x = a;
	y = b;
	std::cout << "standardni\n";
}





template <>
class Zbroj<char> {
protected:
	char x;
	char y;

public:
	Zbroj(char a, char b) { std::cout << "char\n"; x = a; y = b; };
	char zbroji()
	{
		char c;
		
		if (isdigit(x) && isdigit(y))
		{
			std::cout << "digit\n";
			x = x - '0';
			y = y - '0';
			c = x + y;
		}
		else {
			x = x - 'a' + 1;
			y = y - 'a' + 1;
			c = x + y;
		}
		return c;
	};
};





#endif // !ZBROJ_H
