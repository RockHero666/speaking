#include "Neformal.h"
#include"Forward declaration.h"
#include <sstream>

Neformal::Neformal(std::string name , int age )
{
	if (name == "std") { name = Random_name(); }
	if (age == 0) { age = Random_age(); }

	this->name = name;
	this->age = age;
}

std::string  Neformal::Talk(Human* human)
{
	std::string str;
	str = this->getName();
	str += ": ������, ";
	str += human->getName();
	str += "!\n";
	return str;
}

std::string Neformal::Say_of_me()
{
	std::ostringstream buff;
	buff << age;
	std::string str = "���� ����� ";
	str += name;
	str += ", ��� ������� ";
	str += buff.str();
	str += Age_grammatic(this->age);
	str += " � � ��������.\n";

	return str;
}

std::string  Neformal::getName()
{
	return name;
}

int  Neformal::getAge()
{
	return age;
}