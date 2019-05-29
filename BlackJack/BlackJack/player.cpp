#include "player.h"

Player::Player()
{
	lova = 1000;
}

void Player::vuci(Card draw)
{
	ruka.push_back(draw);
}

int Player::bodovi()
{
	int red;
	int count=0;
	int sum = 0;
	for (auto i = ruka.begin(); i != ruka.end(); i++)
	{

		red = ruka[count].getVal();
		if (red >= 9)
		{
			sum += 10;
		}
		else if (red > 0)
		{
			sum += (red + 1);
		}
		count++;
	}
	count = 0;
	for (auto i = ruka.begin(); i != ruka.end(); i++)
	{
		red = ruka[count].getVal();
		if (red == 0)
		{
			if (sum + 11 < 22)
			{
				
				sum+=11;
			}
			else
			{
				
				sum += 1;
			}
		}
		count++;
	}
	
	return sum;
}

void Player::printRuka()
{
	for (auto i = ruka.begin(); i != ruka.end(); ++i)
	{
		i->printCard();
		std::cout << "  ";
	}
	std::cout << std::endl;
}


void Player::reset()
{
	while (ruka.size() != 0)
	{
		ruka.pop_back();
	}
}

int Player::getBalance()
{
	return lova;
}

void Player::newBalance(int pare)
{
	lova += pare;
}