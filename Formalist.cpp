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
	str += ": ������������, ";
	str += human->getName();
	str += "!\n";
	return str;
}

std::string Formalist::Say_of_me()
{
	std::ostringstream buff;
	buff << age;
	std::string str = "���� ����� ";
	str += name;
	str += ", ��� ������� ";
	str += buff.str();
	str += Age_grammatic(this->age);
	str += " � � ���������.\n";

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