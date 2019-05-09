#pragma once
#ifndef HRANA_H
#define HRANA_H
#include <iostream>
#include <string>
#include <map>
#include <chrono>
#include <ctime> 
#include <math.h>
#include <vector>
#include "hrana.h"
#define _CRT_SECURE_NO_WARNINGS

class Potrosnja
{
public:
	int god;
	int mj;
	int kolicina;

	Potrosnja();
};


class Hrana 
{
protected:
	std::string vrsta;
	std::string naziv;
	std::string rokTrajanja; //(datum u formatu dd - mm - yyyy
	int kolicinaVode;
	int kolicinaProteina;
	int kolicinaMasti;
	int kolicinaUgljikohidrata;
	int dnevnaKolicina;
	int nizTrajanja;
	std::vector<Potrosnja> mjesecnaPotrosnja;
	
public:
	Hrana(std::string, std::string ime, int voda, int protein, int masti, int ugljikohidrati, int kolicina, std::string rok);
	~Hrana();
	Hrana(const Hrana &drugaHrana);
	void promjeniPotrosnju(bool promjeni);
	void print() const;
	void pratiPotrosnju(int mj, int god, int potrosnja);
	void velikiSkok();


};

#endif