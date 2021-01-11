#include "Realist.h"
#include"Forward declaration.h"
#include <sstream>

Realist::Realist(std::string name, int age)
{
	if (name == "std") { name = Random_name(); }
	if (age == 0) { age = Random_age(); }

	this->name = name;
	this->age = age;
}

std::string  Realist::Talk(Human* human)
{
	std::string str;
	str = this->getName();

	if(this->getAge()+5<=human->getAge())
	str += ": Здравствуйте, ";
	else
	str += ": Привет, ";

	str += human->getName();
	str += "!\n";
	return str;
}

std::string Realist::Say_of_me()
{
	std::ostringstream buff;
	buff << age ;
	std::string str = "Меня зовут ";
	str += name;
	str += ", мой возраст ";
	str += buff.str();
	str += Age_grammatic(this->age);
	str += " и я реалист.\n";

	return str;
}

std::string  Realist::getName()
{
	return name;
}

int  Realist::getAge()
{
	return age;
}
