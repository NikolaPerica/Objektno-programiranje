#pragma once
#ifndef WITCHER3
#define WITCHER3


#include "VideoGame.h"
#include "rpg.h"
#include "openworld.h"

class Witcher3 : public RPG , public OpenWorld
{
	std::string zanr;
	std::vector<platforms> podrzane;
public:
	Witcher3();
	std::string type();
	

};
#endif