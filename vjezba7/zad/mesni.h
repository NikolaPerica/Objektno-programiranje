#pragma once
#ifndef MESNI_H
#define MESNIH

#include "zadatak1/hrana.h"
#include "pch.h"
#include <iostream>
#include <vector>
#include <string>

class Mesni : public Hrana
{
private:
	float potrosnjaSamostalno;
	float potrosnjaPrilog;
public:
	Mesni(std::string tip, std::string ime, int voda, int protein, int masti, int ugljikohidrati, int kolicina, std::string rok, float potrosnjaSamostalno,
		float potrosnjaPrilog);
	~Mesni();
	float getSamostalnaPotrosnja();
	float getPrilogPotrosnja();
	friend std::istream& operator>>(std::istream &input, Mesni &mesni);
	friend std::ostream& operator<<(std::ostream &output, Mesni &mesni);
};

class Meso : public Mesni
{
private:
	std::string naziv;
public:
	Meso(std::string tip, std::string ime, int voda, int protein, int masti, int ugljikohidrati, int kolicina, std::string rok, float potrosnjaSamostalno,
		float potrosnjaPrilog, std::string naziv);
	~Meso();

};

class Sunka : public Mesni
{
private:
	std::string naziv;
public:
	Sunka(std::string tip, std::string ime, int voda, int protein, int masti, int ugljikohidrati, int kolicina, std::string rok, float potrosnjaSamostalno,
		float potrosnjaPrilog, std::string naziv);
	~Sunka();
};

class Prsut : public Mesni
{
private:
	std::string naziv;
public:
	Prsut(std::string tip, std::string ime, int voda, int protein, int masti, int ugljikohidrati, int kolicina, std::string rok, float potrosnjaSamostalno,
		float potrosnjaPrilog, std::string naziv);
	~Prsut();
};


#endif