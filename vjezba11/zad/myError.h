#include <exception>
#include <iostream>
#include <ctime>
#include <string>;

class ErrorMain
{
public:
	std::string getDate();
	void writeLog(std::string message);

};

class ErrorNum : public ErrorMain
{
public:
	std::string errorMes;
	void writeLog(std::string message);
};

class ErrorOP : public ErrorMain
{
	std::string errorMes;
	void writeLog(std::string message);

};

class ErrorDivide : public ErrorMain
{
	std::string errorMes;
	void writeLog(std::string message);

};