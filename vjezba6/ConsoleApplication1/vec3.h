#pragma once
#ifndef VEC3_H
#define VEC3_H
#include "pch.h"
#include "vec3.h"
#include <iostream>


namespace OOP{
class Vec3
{
	float x;
	float y;
	float z;
	static int counter;

public:

	Vec3();
	~Vec3();
	friend std::istream& operator>>(std::istream &input, Vec3 &vec);
	friend std::ostream& operator<<(std::ostream &output, Vec3 &vec);
	Vec3& operator=( Vec3 &vec);
	Vec3& operator+( Vec3 &vec);
	Vec3& operator-( Vec3 &vec);
	friend Vec3& operator*(Vec3 &vec, const int& br);
	friend Vec3& operator/(Vec3 &vec, const int& br);
	friend bool operator==(Vec3 &vec1, Vec3 &vec2);
	friend bool operator!=(Vec3 &vec1, Vec3 &vec2);
	friend float operator*(Vec3 &vec1, Vec3 &vec);
	float operator[](int index) ;
	friend void normalizirajVektor(Vec3& vector);

};

}
#endif // !VEC#_H