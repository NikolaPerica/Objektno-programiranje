#pragma once
#ifndef MLJECNI_H
#define MLJECNI_H

#include "zadatak1/hrana.h"
#include "pch.h"
#include <iostream>
#include <vector>
#include <string>

class Mljecni : public Hrana
{
private:
	float potrosnjaSamostalno;
	float potrosnjaPrilog;
public:
	Mljecni(std::string tip, std::string ime, int voda, int protein, int masti, int ugljikohidrati, int kolicina, std::string rok, float potrosnjaSamostalno, 
		float potrosnjaPrilog);
	~Mljecni();
	float getSamostalnaPotrosnja();
	float getPrilogPotrosnja();
};

class Sir : public Mljecni
{
private:
	std::string naziv;
public:
	Sir(std::string tip, std::string ime, int voda, int protein, int masti, int ugljikohidrati, int kolicina, std::string rok, float potrosnjaSamostalno, 
		float potrosnjaPrilog, std::string naziv);
	~Sir();

};

class Mlijeko : public Mljecni
{
private:
	std::string naziv;
public:
	Mlijeko(std::string tip, std::string ime, int voda, int protein, int masti, int ugljikohidrati, int kolicina, std::string rok, float potrosnjaSamostalno,
		float potrosnjaPrilog, std::string naziv);
	~Mlijeko();
};

class Jogurt : public Mljecni
{
private:
	std::string naziv;
public:
	Jogurt(std::string tip, std::string ime, int voda, int protein, int masti, int ugljikohidrati, int kolicina, std::string rok, float potrosnjaSamostalno,
		float potrosnjaPrilog, std::string naziv);
	~Jogurt();
};

#endif


