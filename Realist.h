#pragma once
#include "Human.h"

class Realist : public Human
{

public:

	Realist(std::string name = "std", int age = 0);
	virtual std::string Talk(Human* human);
	virtual std::string Say_of_me();
	virtual std::string getName();
	virtual int getAge();
};

