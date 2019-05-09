#pragma once
#ifndef KOLACI_H
#define KOLACI_H

#include "zadatak1/hrana.h"
#include "pch.h"
#include <iostream>
#include <vector>
#include <string>

class Kolaci : public Hrana
{
private:
	float potrosnjaSamostalno;
	float potrosnjaPrilog;
public:
	Kolaci(std::string tip, std::string ime, int voda, int protein, int masti, int ugljikohidrati, int kolicina, std::string rok, float potrosnjaSamostalno,
		float potrosnjaPrilog);
	~Kolaci();
	float getSamostalnaPotrosnja();
	float getPrilogPotrosnja();
	friend std::istream& operator>>(std::istream &input, Kolaci &kolaci);
	friend std::ostream& operator<<(std::ostream &output, Kolaci &kolaci);
};

class Madarica : public Kolaci
{
private:
	std::string naziv;
public:
	Madarica(std::string tip, std::string ime, int voda, int protein, int masti, int ugljikohidrati, int kolicina, std::string rok, float potrosnjaSamostalno,
		float potrosnjaPrilog, std::string naziv);
	~Madarica();

};

class Krempita : public Kolaci
{
private:
	std::string naziv;
public:
	Krempita(std::string tip, std::string ime, int voda, int protein, int masti, int ugljikohidrati, int kolicina, std::string rok, float potrosnjaSamostalno,
		float potrosnjaPrilog, std::string naziv);
	~Krempita();
};

class Torta : public Kolaci
{
private:
	std::string naziv;
public:
	Torta(std::string tip, std::string ime, int voda, int protein, int masti, int ugljikohidrati, int kolicina, std::string rok, float potrosnjaSamostalno,
		float potrosnjaPrilog, std::string naziv);
	~Torta();
};


#endif