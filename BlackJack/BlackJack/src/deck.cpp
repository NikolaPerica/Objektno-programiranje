#include "deck.h"
#include <time.h> 
#include <random>


Deck::Deck()
{
	std::string boja[4] = { "Spades","Clubs","Hearts","Diamonds" };
	std::string nazivKarte[14] = { "Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
	srand(time(nullptr));
	int pos;
	int max;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 13; j++)
		{
			if (dek.size() == 0)
			{
				dek.push_back(Card(boja[i], nazivKarte[j], j));
			}
			else
			{
				max = dek.size();
		
				pos = rand() % (max+1);
			
				dek.insert(dek.begin() + pos, Card(boja[i], nazivKarte[j], j));
			}
			
		}
	}

}

Card Deck::draw()
{
	Card draw = dek.back();
	dek.pop_back();
	return draw;
}

void Deck::printDeck()
{
	int count = 0;
	for (auto i = dek.begin(); i != dek.end(); ++i)
	{
		dek[count].printCard();
		std::cout << "\n";
		count++;
	}
	std::cout << std::endl;
}