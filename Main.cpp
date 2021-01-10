#include <iostream>
#include <Windows.h>
#include "Formalist.h"
#include "Neformal.h"
#include "Realist.h"
#include "Human.h"

int main()
{
	setlocale(0, "");		 //***
	SetConsoleCP(1251);		 //русификация
	SetConsoleOutputCP(1251);//***
	
	Human* hum[20];


	int it_count = 0;
	for (int i = 0; i < 20; i++)  // заполнение массива аннонимными динамически выделеными объектами
	{
		if (it_count == 0)
		{
			hum[i] = new Formalist();
		}
		else if (it_count == 1)
		{
			hum[i] = new Neformal();
		}
		else if (it_count == 2)
		{
			hum[i] = new Realist();
			it_count = 0;
			continue;
		}

		
		it_count++;
	}

	for (int i = 0; i < 20; i++)
	{
		//if (i != 19)   снять коменты для проверки алгоритма
		//std::cout << hum[i]->Say_of_me();

		if (i != 19)
			std::cout << hum[i]->Talk(hum[i + 1]);
		else
			std::cout << hum[i]->Say_of_me(); // дал слово последниму в списке
	}
	

	for (int i = 0; i < 20; i++) // очистка динам. памяти внутри статического массива
	{
		delete hum[i];
	}
	
	return 0;
}