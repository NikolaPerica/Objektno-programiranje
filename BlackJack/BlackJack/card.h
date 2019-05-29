#pragma once
#ifndef CARD_H
#define CARD_H

#include<string>
#include<iostream>

class Card
{
protected:
	std::string boja;
	std::string rank;
	int pos;

public:
	Card();
	Card(std::string bojaKarte, std::string rankKarte, int pos);
	void printCard() const;
	int getVal();

};

#endif // !CARD_H
