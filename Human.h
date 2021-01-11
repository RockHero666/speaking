#pragma once
#include <string>

class Human
{
protected:

	std::string name;
	int age;

public:
	virtual std::string Talk(Human* human) = 0;
	virtual std::string Say_of_me() = 0;
	virtual std::string getName() = 0;
	virtual int getAge() = 0;
};
 
