#pragma once

#ifndef PLAYER_H
#define PLAYER_H

#include "card.h"
#include <vector>
#include <iostream>

class Player
{
protected:
	std::vector<Card> ruka;
	int lova;
public:
	Player();
	void vuci(Card draw);
	int bodovi();
	void reset();
	void newBalance(int pare);
	int getBalance();
	void printRuka();
};
#endif // !PLAYER_H


