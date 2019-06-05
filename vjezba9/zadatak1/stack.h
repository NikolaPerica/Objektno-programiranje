#pragma once

#ifndef STACK_H
#define STACK_H
#include <iostream>

template<typename T>
class Stog {
private:
	const int maxSize = 1000;
	const int defaultSize = 10;
	int size, top;
	T* stackPtr;
	T* arr;

public:
	Stog() {
		std::cout << "Stog kreator" << std::endl;
		size = defaultSize;
		top = 0;
		arr = new T[size];
		stackPtr = arr;
	}

	Stog(int vel) {
		if (vel <= 0 || vel > maxSize)
			size = defaultSize;
		else
			size = vel;
		top = 0;
		arr = new T[size];
		stackPtr = arr;
	}

	~Stog() {
		//std::cout << "Stog destructor" << std::endl;
		while (!isEmpty()) {
			pop();
		}
		isEmpty();
	}



	void push(T podatak) {
		if (isFull()) {
			std::cout << "Stog pun" << std::endl;
			return;
		}
		*stackPtr = podatak;
		top++;
		stackPtr++;
	}

	T pop() {
		if (isEmpty()) {
			std::cout << "Stog prazan." << std::endl;
			return NULL;
		}
		top--;
		stackPtr--;
		return *stackPtr;
	}


	const bool isFull() {
		if (top >= size)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	const bool isEmpty() {
		if (top <= 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	const T naVrhu() {
		if (isEmpty()) {
			std::cout << "Stack je prazan." << std::endl;
			return NULL;
		}
		return arr[top - 1];
	}

	const int curr_size() {
		return size;
	}



};
#endif