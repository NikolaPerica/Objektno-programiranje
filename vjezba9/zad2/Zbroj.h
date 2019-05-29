#pragma once
#ifndef ZBROJ_H
#define ZBROJ_H

template <class T>
	class Zbroj {
	private:
		T x;
		T y;

	public:
		Zbroj(T x, T y);
		T zbroji() { return x + y; };
};


template <class T>

Zbroj<T>::Zbroj(T a, T b)
{
	x = a;
	y = b;

}


template <>
class Zbroj<char> {
private:
	char x;
	char y;

public:
	Zbroj(char x, char y) { x = x; y = y; };
	char zbroji() { return x + y; };
};

#endif // !ZBROJ_H
