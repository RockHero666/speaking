#include <iostream>
#include <Windows.h>
#include "Formalist.h"
#include "Neformal.h"
#include "Realist.h"
#include "Human.h"

int main()
{
	setlocale(0, "");		 //***
	SetConsoleCP(1251);		 //�����������
	SetConsoleOutputCP(1251);//***
	
	Human* hum[20];


	int it_count = 0;
	for (int i = 0; i < 20; i++)  // ���������� ������� ����������� ����������� ���������� ���������
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
		//if (i != 19)   ����� ������� ��� �������� ���������
		//std::cout << hum[i]->Say_of_me();

		if (i != 19)
			std::cout << hum[i]->Talk(hum[i + 1]);
		else
			std::cout << hum[i]->Say_of_me(); // ��� ����� ���������� � ������
	}
	

	for (int i = 0; i < 20; i++) // ������� �����. ������ ������ ������������ �������
	{
		delete hum[i];
	}
	
	return 0;
}