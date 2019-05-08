#include "zadatak1/hrana.h"
#include "mljecni.h"

Mljecni::Mljecni(std::string tip, std::string ime, int voda, int protein, int masti, int ugljikohidrati, int kolicina, std::string rok, float samostalno, float prilog):
	Hrana(tip, ime, voda, protein, masti, ugljikohidrati, kolicina, rok)
{
	potrosnjaSamostalno = samostalno;
	potrosnjaPrilog = prilog;
}

Mljecni::~Mljecni()
{
	std::cout << "destruktor mljecni\n";

}
float Mljecni::getSamostalnaPotrosnja()
{
	return potrosnjaSamostalno;
}
float Mljecni::getPrilogPotrosnja()
{
	return potrosnjaPrilog;
}

Sir::Sir(std::string tip, std::string ime, int voda, int protein, int masti, int ugljikohidrati, int kolicina, std::string rok, float samostalno, float prilog, std::string naziv) :
	Mljecni(tip, ime, voda, protein, masti, ugljikohidrati, kolicina, rok, samostalno, prilog)
{
	naziv = naziv;
}

Sir::~Sir()
{
	std::cout << "destruktor sir\n";

}

Mlijeko::Mlijeko(std::string tip, std::string ime, int voda, int protein, int masti, int ugljikohidrati, int kolicina, std::string rok, float samostalno, float prilog, std::string naziv) :
	Mljecni(tip, ime, voda, protein, masti, ugljikohidrati, kolicina, rok, samostalno, prilog)
{
	naziv = naziv;
}

Mlijeko::~Mlijeko()
{
	std::cout << "destruktor mlijeko\n";

}

Jogurt::Jogurt(std::string tip, std::string ime, int voda, int protein, int masti, int ugljikohidrati, int kolicina, std::string rok, float samostalno, float prilog, std::string naziv) :
	Mljecni(tip, ime, voda, protein, masti, ugljikohidrati, kolicina, rok, samostalno, prilog)
{
	naziv = naziv;
}

Jogurt::~Jogurt()
{
	std::cout << "destruktor jogurt\n";

}
