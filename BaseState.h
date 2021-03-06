#ifndef BASESTATE_H
#define BASESTATE_H

#include "States.h"
#include "Base.h"

class States;
class Base;

class BaseState : public States {
public:
	BaseState(std::string baseName);
	~BaseState();
	std::string getHeader();
	std::string getFileName();
	void runOption(int option);
	friend std::string setId(Base base);

private:
	std::string stateTitle;
	std::string fileName;
	std::string baseName;
};

#endif