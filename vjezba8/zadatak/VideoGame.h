#pragma once
#ifndef VIDEOGAME_H

#define VIDEOGAME_H



#include <string>
#include <iostream>
#include <vector>

class VideoGame
{
protected:
	std::string zanr;
public:
	VideoGame();
	~VideoGame();
	std::string type();
	
	enum platforms { PC = 0, PS4 = 1, XBOX = 2 };
	std::vector<std::string> podrzane;
	std::vector<std::string> igranaPlatformama();

	
};
#endif // !VIDEOGAME_H