#include "pch.h"
#include "vec3.h"
#include <iostream>
#include <math.h>

namespace OOP{

int Vec3::counter= 0;

Vec3::Vec3()
{
	x = 0;
	y = 0;
	z = 0;

	counter++;
}
Vec3::~Vec3()
{
	std::cout << "destruktor";
	counter--;
}

std::istream& operator>>(std::istream &is, Vec3 &vec)
{
	is >> vec.x >> vec.y >> vec.z;
	return is;
}

std::ostream& operator<<(std::ostream &os,  Vec3 &vec)
{
	os << vec.x << " " << vec.y << " " << vec.z << "\n";
	return os;
}

Vec3& Vec3::operator=(Vec3 &vec)
{
	x = vec.x;
	y = vec.y;
	z = vec.z;

	return *this;
}
Vec3& Vec3::operator+(Vec3 &vec)
{
	const auto rez = new Vec3();
	rez->x = x + vec.x;
	rez->y = y + vec.y;
	rez->z = z + vec.z;

	return *rez;
}

Vec3& Vec3::operator-(Vec3 &vec)
{
	const auto rez = new Vec3();
	rez->x = x - vec.x;
	rez->y = y - vec.y;
	rez->z = z - vec.z;

	return *rez;
}

Vec3& operator*(Vec3 &vec,  const int& br)
{
	const auto rez = new Vec3();
	rez->x = vec.x*br;
	rez->y = vec.y*br;
	rez->z = vec.z*br;

	return *rez;
}
Vec3& operator/(Vec3 &vec, const int& br)
{
	const auto rez = new Vec3();
	rez->x = vec.x / br;
	rez->y = vec.y / br;
	rez->z = vec.z / br;

	return *rez;
}
bool operator==(Vec3 &vec1,  Vec3 &vec2)
{
	return ((vec1.x == vec2.x) && (vec1.y == vec2.y) && (vec1.z == vec2.z));
}
bool operator!=(Vec3 &vec1, Vec3 &vec2)
{
	return ((vec1.x != vec2.x) && (vec1.y != vec2.y) && (vec1.z != vec2.z));
}

float operator*(Vec3 &vec1, Vec3 &vec2)
{
	float skalarniProdukt = 0;
	skalarniProdukt += vec1.x * vec2.x;
	skalarniProdukt += vec1.y * vec2.y;
	skalarniProdukt += vec1.z * vec2.z;

	return skalarniProdukt;
}

float Vec3::operator[]( int index)
{
	switch (index) {
	case 1: return x;
		break;       
	case 2: return y;
		break;
	case 3: return z;
		break;
	default: return 0;
	}
}

void normalizirajVektor(Vec3& vec)
{
	float n = sqrt((vec.x*vec.x)+ (vec.y*vec.y)+ (vec.z*vec.z));
	vec.x = vec.x / n;
	vec.y = vec.y / n;
	vec.z = vec.z / n;

}
}