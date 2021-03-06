#include "pch.h"
#include "zadatak1/hrana.h"
#include "mesni.h"
#include <string>


Mesni::Mesni(std::string tip, std::string ime, int voda, int protein, int masti, int ugljikohidrati, int kolicina, std::string rok, float samostalno, float prilog) :
	Hrana(tip, ime, voda, protein, masti, ugljikohidrati, kolicina, rok)
{
	potrosnjaSamostalno = samostalno;
	potrosnjaPrilog = prilog;
}

Mesni::~Mesni()
{
	std::cout << "destruktor mljecni\n";

}


std::ostream& operator<<(std::ostream &os, Mesni &mesni)
{
	os << mesni.naziv << " " << mesni.potrosnjaSamostalno << " kg " << mesni.potrosnjaPrilog << "kg \n";
	return os;
}


Meso::Meso(std::string tip, std::string ime, int voda, int protein, int masti, int ugljikohidrati, int kolicina, std::string rok, float samostalno, float prilog, std::string naziv) :
	Mesni(tip, ime, voda, protein, masti, ugljikohidrati, kolicina, rok, samostalno, prilog)
{
	naziv = naziv;
}

Meso::~Meso()
{
	std::cout << "destruktor meso\n";

}

Sunka::Sunka(std::string tip, std::string ime, int voda, int protein, int masti, int ugljikohidrati, int kolicina, std::string rok, float samostalno, float prilog, std::string naziv) :
	Mesni(tip, ime, voda, protein, masti, ugljikohidrati, kolicina, rok, samostalno, prilog)
{
	naziv = naziv;
}

Sunka::~Sunka()
{
	std::cout << "destruktor sunka\n";

}

Prsut::Prsut(std::string tip, std::string ime, int voda, int protein, int masti, int ugljikohidrati, int kolicina, std::string rok, float samostalno, float prilog, std::string naziv) :
	Mesni(tip, ime, voda, protein, masti, ugljikohidrati, kolicina, rok, samostalno, prilog)
{
	naziv = naziv;
}

Prsut::~Prsut()
{
	std::cout << "destruktor prsut\n";

}
