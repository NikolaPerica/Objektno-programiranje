#pragma once
#ifndef COUNTER_H
#define COUNTER_H



#include "VideoGame.h"
#include <string>
#include <vector>

class counter {
protected:
	 int countPC;
	 int countPS4;
	 int countXBOX;
	//enum platforms { PC, PS4, XBOX };
	//std::vector<platforms> mogucePlatforme { "PC", "PS4", "XBOX" };
	
public:
	counter();
	void add(VideoGame &game);
	std::string najzastupljenija();
};
#endif // !COUNTER_H