#define _CRT_SECURE_NO_WARNINGS
#pragma once

#ifndef MYERROR_H

#include <string>
#include <fstream>
#include <time.h>
#include <chrono>
#include <ctime>    


class myError : public std::exception
{
	std::string poruka;

public:
	myError(const std::string& por) : poruka(por) {}

	std::string dohvatiPoruku() const
	{
		return poruka;
	}
	void zapisiGresku(const std::string& dok) const
	{

		auto vrijeme = std::chrono::system_clock::now();

		
		std::time_t time = std::chrono::system_clock::to_time_t(vrijeme);

		std::ofstream errorLog;

		errorLog.open(dok);

		errorLog << std::ctime(&time) << " "<< poruka << " \n";
		errorLog.close();
	}
};


class brojError : public myError
{
	std::string poruka;
public:
	brojError() : myError("Nije unesen broj") {}
};

class djeljenjeError : public myError
{
	std::string poruka;
public:
	djeljenjeError() : myError("Djeljenje s 0") {}
};

class operatorError : public myError
{
	std::string poruka;
public:
	operatorError() : myError("Problem s operatorom") {}
};

#endif // !1


