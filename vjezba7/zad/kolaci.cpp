#include "zadatak1/hrana.h"
#include "kolaci.h"
#include "pch.h"

Kolaci::Kolaci(std::string tip, std::string ime, int voda, int protein, int masti, int ugljikohidrati, int kolicina, std::string rok, float samostalno, float prilog) :
	Hrana(tip, ime, voda, protein, masti, ugljikohidrati, kolicina, rok)
{
	potrosnjaSamostalno = samostalno;
	potrosnjaPrilog = prilog;
}

Kolaci::~Kolaci()
{
	std::cout << "destruktor mljecni\n";

}

std::ostream& operator<<(std::ostream &os, Kolaci &kolaci)
{
	os << kolaci.naziv << " " << kolaci.potrosnjaSamostalno << " kg " << kolaci.potrosnjaPrilog << "kg \n";
	return os;
}

Madarica::Madarica(std::string tip, std::string ime, int voda, int protein, int masti, int ugljikohidrati, int kolicina, std::string rok, float samostalno, float prilog, std::string naziv) :
	Kolaci(tip, ime, voda, protein, masti, ugljikohidrati, kolicina, rok, samostalno, prilog)
{
	naziv = naziv;
}

Madarica::~Madarica()
{
	std::cout << "destruktor madarica\n";

}

Krempita::Krempita(std::string tip, std::string ime, int voda, int protein, int masti, int ugljikohidrati, int kolicina, std::string rok, float samostalno, float prilog, std::string naziv) :
	Kolaci(tip, ime, voda, protein, masti, ugljikohidrati, kolicina, rok, samostalno, prilog)
{
	naziv = naziv;
}

Krempita::~Krempita()
{
	std::cout << "destruktor krempita\n";

}

Torta::Torta(std::string tip, std::string ime, int voda, int protein, int masti, int ugljikohidrati, int kolicina, std::string rok, float samostalno, float prilog, std::string naziv) :
	Kolaci(tip, ime, voda, protein, masti, ugljikohidrati, kolicina, rok, samostalno, prilog)
{
	naziv = naziv;
}

Torta::~Torta()
{
	std::cout << "destruktor torta\n";

}
