#include"Witcher3.h"

Witcher3::Witcher3()
{
	zanr = "RPG, Open world";
	podrzane = { PS4 };
}

std::string Witcher3::type()
{
	return zanr;
}

