#include "Formalist.h"
#include"Forward declaration.h"
#include <sstream>

Formalist::Formalist(std::string name , int age)
{
	if (name == "std")  {name = Random_name(); }
	if (age == 0)		{age = Random_age();  }

	this->name = name;
	this->age = age;
	
}

std::string  Formalist::Talk (Human *human)
{

	std::string str;
	str = this->getName();
	str += ": Здравствуйте, ";
	str += human->getName();
	str += "!\n";
	return str;
}

std::string Formalist::Say_of_me()
{
	std::ostringstream buff;
	buff << age;
	std::string str = "Меня зовут ";
	str += name;
	str += ", мой возраст ";
	str += buff.str();
	str += Age_grammatic(this->age);
	str += " и я формалист.\n";

	return str;
}

std::string  Formalist::getName()
{
	return name;
}

int  Formalist::getAge()
{
	return age;
}