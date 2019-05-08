#include <iostream>
#include <string>
#include <map>
#include <chrono>
#include <ctime> 
#include <math.h>
#include <stdlib.h>
#include "hrana.h"
#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS

Potrosnja::Potrosnja()
{
	god = 0;
	mj = 0;
	kolicina = 0;
}

 Hrana::Hrana(std::string tip, std::string ime, int voda, int protein, int masti, int ugljikohidrati, int kolicina, std::string rok)
{
	 std::cout << "Konstruktor\n";
	 time_t now = time(0);

	 vrsta = tip;
	 naziv = ime;
	 kolicinaVode = voda;
	 kolicinaProteina = protein;
	 kolicinaMasti = masti;
	 kolicinaUgljikohidrata = ugljikohidrati;
	 dnevnaKolicina = kolicina;
	 rokTrajanja = rok;

	 char* dt = ctime(&now);
	 tm *ltm = localtime(&now);
	 int sadagod = (1900 + ltm->tm_year);
	 int sadamj= 1 + ltm->tm_mon;
	 std::cout <<  sadamj<<" "<<sadagod << std::endl;
	 int trajanjemj = std::stoi(rokTrajanja.substr(3, 4));
	 int trjanjegod = std::stoi(rokTrajanja.substr(6, 9));
	 int rokMj = trajanjemj - sadamj;
	 int rokGod = trjanjegod - sadagod;
	 nizTrajanja = (rokMj + rokGod * 12)*2;
	 std::cout << trajanjemj << " " << trjanjegod << std::endl;
	 std::cout << rokMj << " " << rokGod << std::endl;
	 std::cout << nizTrajanja <<std::endl;
	 std::vector<Potrosnja> mjesecnaPotrosnja;
	
	std::cout << vrsta << " " << naziv << " " << kolicinaVode << " " << kolicinaProteina << " " << kolicinaMasti << " " << kolicinaUgljikohidrata << " " << dnevnaKolicina << " " << rokTrajanja << " \n";

}
Hrana::~Hrana()
{
	std::cout << "destruktor\n";
	
}
Hrana::Hrana(const Hrana &drugaHrana)
{

	std::cout << "Copy konstruktor\n";
	vrsta = drugaHrana.vrsta;
	naziv = drugaHrana.naziv;
	kolicinaVode = drugaHrana.kolicinaVode;
	kolicinaProteina = drugaHrana.kolicinaProteina;
	kolicinaMasti = drugaHrana.kolicinaMasti;
	kolicinaUgljikohidrata = drugaHrana.kolicinaUgljikohidrata;
	dnevnaKolicina = drugaHrana.dnevnaKolicina;
	rokTrajanja = drugaHrana.rokTrajanja;
	nizTrajanja = drugaHrana.nizTrajanja;
	mjesecnaPotrosnja = drugaHrana.mjesecnaPotrosnja;
	

}
void Hrana::promjeniPotrosnju(bool promjeni)
{
	if (promjeni)
		dnevnaKolicina++;
	else
		dnevnaKolicina--;
}
void Hrana::print() const
{
	std::cout << vrsta << " " << naziv << " " << kolicinaVode << " " << kolicinaProteina << " " << kolicinaMasti << " " << kolicinaUgljikohidrata << " " << dnevnaKolicina << " " << rokTrajanja << " \n";
}

void Hrana::pratiPotrosnju(int mju, int godu, int portosnjau)
{
	time_t now = time(0);
	char* dt = ctime(&now);
	tm *ltm = localtime(&now);
	int sadagod = (1900 + ltm->tm_year);
	int sadamj = 1 + ltm->tm_mon;
	//std::cout << sadamj << " " << sadagod << std::endl;
	int trajanjemj = std::stoi(rokTrajanja.substr(3, 4));
	int trjanjegod = std::stoi(rokTrajanja.substr(6, 9));
	int rokMj = trajanjemj - sadamj;
	int rokGod = trjanjegod - sadagod;
	int nizTrajanja = (rokMj + rokGod * 12) * 2;
	Potrosnja tmp;

	
	if (godu > sadagod) {
		std::cout << "Nemosete dodati za sljedecu godinu \n";
	}
	else {

		for (unsigned int i = 0; i < mjesecnaPotrosnja.size(); i++) {
			if (mjesecnaPotrosnja[i].god == godu) {
				if (mjesecnaPotrosnja[i].mj == mju) {
					std::cout << "vec postoji";
					break;
				}
			}
		}
			tmp.god = godu;
			tmp.mj = mju;
			tmp.kolicina = portosnjau;
			mjesecnaPotrosnja.push_back(tmp);
			std::cout << "dodano";
		

	}

}
void Hrana::velikiSkok()
{
	time_t now = time(0);
	char* dt = ctime(&now);
	tm *ltm = localtime(&now);
	int sadagod = (1900 + ltm->tm_year);
	float promjena;
	float ovogodisnja = 0, proslogodisnja = 0;

	for (int i = 0; i < mjesecnaPotrosnja.size(); i++) {
		if (mjesecnaPotrosnja[i].god == sadagod) {
			ovogodisnja += mjesecnaPotrosnja[i].kolicina;
			
		}
		else if (mjesecnaPotrosnja[i].god == sadagod - 1) {
			proslogodisnja += mjesecnaPotrosnja[i].kolicina;

		}
	}

	std::cout << "ova god: " << ovogodisnja << std::endl;
	std::cout << "prosla god: " << proslogodisnja << std::endl;
	promjena = ((ovogodisnja - proslogodisnja)/ovogodisnja) * 100;
	std::cout << "promjena: " << promjena << "% "<<std::endl;
	if (promjena > 10)
	{
		std::cout << "ovogodisnja potrosnja je porasla za: " << promjena << "% " << std::endl;
	}
	else if (promjena < -10)
	{
		std::cout << "ovogodisnja potrosnja je pala za: " << abs(promjena) << "% " << std::endl;
	}
}



	

