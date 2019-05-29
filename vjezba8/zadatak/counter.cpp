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
	std::vector<std::string> platfs = game.igranaPlatformama();
	std::string tmp;
	std::string PC = { "PC" };
	
	for (std::size_t i = 0;  i < platfs.size(); i++)
	{
		tmp = platfs[i];
		if (tmp.compare(PC))
		{
			
			countPC++;
		}
		else if (tmp.compare("PS4"))
		{
			
			countPS4++;
		}
		else if(tmp.compare("XBOX"))
		{
			
			countXBOX++;
		}
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

	

	return "Nema najzastupljenije";
}