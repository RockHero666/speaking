#include<random>

int Random(int beg,int end) // вихрь марслена 
{
	std::random_device rd; // случайное число
	std::mt19937 random(rd()); // с вихрем марслена
	std::uniform_int_distribution<> distrib(beg, end); // в определенном диапазоне что бы можно было передать вихрь

	return distrib(random);// возврат диапазона с параметром вихря
}

std::string Random_name()
{
	std::string str[10]
	{
		"Александр",
		"Андрей",
		"Анастасия",
		"Ирина",
		"Наталья",
		"Павел",
		"Роман",
		"Светлана",
		"Сергей",
		"Татьяна"
	};

	return str[Random(0, 9)];

}

int Random_age()
{
	return Random(20, 40);
}

std::string Age_grammatic(int x)
{
	std::string str;
	switch (x)
	{
	case 20:case 25: case 26: case 27: case 28: case 29:
	case 30: case 35: case 36: case 37: case 38: case 39:
	case 40:
		str = " лет";
		break;
	case 22: case 23: case 24:
	case 32: case 33: case 34:
		str = " года";
		break;
	case 21:case 31:
		str = " год";
		break;
	}
	return str;
}