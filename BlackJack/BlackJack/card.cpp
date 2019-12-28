#include "card.h"

Card::Card()
{

}


Card::Card(std::string bojaKarte, std::string rankKarte, int posKarte)
	:boja(bojaKarte),rank(rankKarte),pos(posKarte) {}

void Card::printCard() const
{
	
	std::cout << rank << " of " << boja;
}

int Card::getVal()
{
	return pos;
}