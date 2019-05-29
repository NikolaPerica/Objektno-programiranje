#include "counter.h"
#include "VideoGame.h"
#include <string>
#include <vector>

counter::counter()
{
	countPC = 0;
	countPS4 = 0;
	countXBOX = 0; 

}

void counter::add(VideoGame &game)
{
	std::string platfs = game.igranaPlatformama();
	
	for (int i = 0; i < game.podrzane.size; i++)
	{
		if (strcmp(game.podrzane[i], "PC"))
			countPC++;
		else if (strcmp(game.podrzane[i], "PS4"))
			countPS4++;
		else if(strcmp(game.podrzane[i], "XBOX"))
			countXBOX++;
	}

}


std::string counter::najzastupljenija()
{
	if (countPC > countPS4 && countPC > countXBOX)
		return "PC";
	else if (countPS4 > countPC && countPS4 > countXBOX)
		return "PC";
	if (countPC > countPS4 && countPC > countXBOX)
		return "PS4";
	else if (countXBOX > countPC && countXBOX > countPS4)
		return "XBOX";
}