#include<random>

int Random(int beg,int end) // ����� �������� 
{
	std::random_device rd; // ��������� �����
	std::mt19937 random(rd()); // � ������ ��������
	std::uniform_int_distribution<> distrib(beg, end); // � ������������ ��������� ��� �� ����� ���� �������� �����

	return distrib(random);// ������� ��������� � ���������� �����
}

std::string Random_name()
{
	std::string str[10]
	{
		"���������",
		"������",
		"���������",
		"�����",
		"�������",
		"�����",
		"�����",
		"��������",
		"������",
		"�������"
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
		str = " ���";
		break;
	case 22: case 23: case 24:
	case 32: case 33: case 34:
		str = " ����";
		break;
	case 21:case 31:
		str = " ���";
		break;
	}
	return str;
}