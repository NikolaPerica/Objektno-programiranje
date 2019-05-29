#include "VideoGame.h"
#include <string>
#include <vector>


VideoGame::VideoGame()
{

}

std::string VideoGame::type()
{
	return zanr;
}

std::vector<std::string> VideoGame::igranaPlatformama()
{
	return podrzane;
}
