#pragma once
#ifndef DECK_H
#define DECK_H

#include "card.h"
#include <vector>

class Deck 
{
protected:
	std::vector<Card> dek;

public:
	Deck();
	Card draw();
	void printDeck();

};

#endif // !DECK_H
