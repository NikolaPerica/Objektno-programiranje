#pragma once
#ifndef VEGE_H
#define VEGE_H

#include "zadatak1/hrana.h"
#include "pch.h"
#include <iostream>
#include <vector>
#include <string>

class Vege : public Hrana
{
private:
	float potrosnjaSamostalno;
	float potrosnjaPrilog;
public:
	Vege(std::string tip, std::string ime, int voda, int protein, int masti, int ugljikohidrati, int kolicina, std::string rok, float potrosnjaSamostalno,
		float potrosnjaPrilog);
	~Vege();
	float getSamostalnaPotrosnja();
	float getPrilogPotrosnja();
	friend std::istream& operator>>(std::istream &input, Vege &vege);
	friend std::ostream& operator<<(std::ostream &output, Vege &vege);

};

class Riza : public Vege
{
private:
	std::string naziv;
public:
	Riza(std::string tip, std::string ime, int voda, int protein, int masti, int ugljikohidrati, int kolicina, std::string rok, float potrosnjaSamostalno,
		float potrosnjaPrilog, std::string naziv);
	~Riza();

};

class Tofu : public Vege
{
private:
	std::string naziv;
public:
	Tofu(std::string tip, std::string ime, int voda, int protein, int masti, int ugljikohidrati, int kolicina, std::string rok, float potrosnjaSamostalno,
		float potrosnjaPrilog, std::string naziv);
	~Tofu();
};

class Hummus : public Vege
{
private:
	std::string naziv;
public:
	Hummus(std::string tip, std::string ime, int voda, int protein, int masti, int ugljikohidrati, int kolicina, std::string rok, float potrosnjaSamostalno,
		float potrosnjaPrilog, std::string naziv);
	~Hummus();
};

#endif


