#include "game.h"

void igraj()
{
	int ulog;
	int hit;
	int novaIgra;
	bool igraj = true;
	bool jaBusted = false;
	bool BlackJack = false;
	bool casinoBlackJack = false;
	Deck spil;
	spil.printDeck();
	Player ja, casino;
	Card izvucena;
	std::cout << "Stanje racuna: " << ja.getBalance() << "\n";
	while (ja.getBalance() > 0 || igraj==true)
	{
		std::cout << "Ulog: ";
		std::cin >> ulog;
		while (ulog > ja.getBalance())
		{
			std::cout << "nedovoljno sredstava\n";
			std::cout << "Ponovo unesite ulog: ";
			std::cin >> ulog;
		}
		std::cout << "\n\n";
		izvucena = spil.draw();
		ja.vuci(izvucena);
		izvucena = spil.draw();
		ja.vuci(izvucena);
		std::cout << "Karte igraca: \n";
		ja.printRuka();
		std::cout << "Bodovi igraca: "<< ja.bodovi()<<"\n";
		std::cout << "\n\n";

		izvucena = spil.draw();
		casino.vuci(izvucena);
		std::cout << "Karte casina: \n";
		casino.printRuka();
		std::cout << "Bodovi casina: " << casino.bodovi() << "\n\n";
		izvucena = spil.draw();
		casino.vuci(izvucena);
		std::cout << "\n\n";
		std::cout << "bilo koji broj za novu kartu 0 za stat: ";
		std::cin >> hit;
		std::cout << "\n\n";
		if (ja.bodovi() == 21)
		{
			std::cout << "BlackJack \n";
			ja.newBalance(ulog + ulog * 3 / 2);
			std::cout << "Stanje racuna: " << ja.getBalance() << "\n";
			BlackJack = true;
		}
		while (hit != 0 && !BlackJack)
		{
			izvucena = spil.draw();
			ja.vuci(izvucena);
			std::cout << "Karte igraca: \n";
			ja.printRuka();
			std::cout << "Bodovi igraca: " << ja.bodovi() << "\n\n";
			if (ja.bodovi() > 21)
			{
				jaBusted = true;
				std::cout << "Busted \n";
				ja.newBalance(-ulog);
				std::cout << "Stanje racuna: "<<ja.getBalance() <<"\n";
				break;
				
			}
			
			std::cout << "bilo koji broj za novu kartu 0 za stat: ";
			std::cin >> hit;
			std::cout << "\n\n";
		}
		std::cout << "\n\n";

		casino.printRuka();
		std::cout << "Bodovi casina: " << casino.bodovi() << "\n";
		if (casino.bodovi() == 21)
		{
			std::cout << "BlackJack \n";
			ja.newBalance(-ulog);
			std::cout << "Stanje racuna: " << ja.getBalance() << "\n";
			casinoBlackJack = true;
		}
		while (casino.bodovi() < 17 && !jaBusted && !casinoBlackJack && !BlackJack)
		{

			izvucena = spil.draw();
			casino.vuci(izvucena);
			std::cout << "Karte kasina: \n";
			casino.printRuka();
			std::cout << "Bodovi casina: " << casino.bodovi() << "\n";
			if (casino.bodovi() > 21)
			{
				std::cout << "Casino busted \n";
				ja.newBalance(ulog*2);
				std::cout << "Stanje racuna: " << ja.getBalance() << "\n";

				break;

			}
			else if (casino.bodovi() == 21)
			{
				std::cout << "BlackJack \n";
				ja.newBalance(-ulog);
				std::cout << "Stanje racuna: " << ja.getBalance() << "\n";
				break;

			}
		}
		std::cout << "\n\n";
		if(ja.bodovi()==casino.bodovi() && ja.bodovi()<22)
		{
			
			ja.newBalance(ulog);
			std::cout << "Stanje racuna: " << ja.getBalance() << "\n";


		}
		else if(ja.bodovi() > casino.bodovi() && ja.bodovi() < 22)
		{

			ja.newBalance(ulog*2);
			std::cout << "Stanje racuna: " << ja.getBalance() << "\n";

		}
		else if(ja.bodovi() < casino.bodovi() && casino.bodovi() < 22)
		{

			ja.newBalance(-ulog);
			std::cout << "Stanje racuna: " << ja.getBalance() << "\n";

		}
		if (ja.getBalance() == 0)
		{
		
			break;

		}
		ja.reset();
		casino.reset();
		std::cout << "\n\n";
		std::cout << "0 za zavrsiti igru bilo koji broj za nastaviti ";
		std::cin >> novaIgra;
		if (novaIgra == 0)
		{
			std::cout << "Izgubili ste"\n";
			igraj = false;
			
		}
		
	}
	getchar();
}