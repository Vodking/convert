#include<iostream>

int main()
{
	setlocale(LC_ALL, "ru");
	int num;
	int count = 1000;
	while (true)
	{
		do
		{
			std::cout << "������� ����� �� 1 �� 9999: \n";
			std::cin >> num;
		} while (num < 1 || num > 9999);

		if ((num / 1000) % 10 == 1)
		{
			std::cout << "���� ������ ";
		}
		else if ((num / 1000) % 10 == 2)
		{
			std::cout << "��� ������ ";
		}
		else if ((num / 1000) % 10 == 3)
		{
			std::cout << "��� ������ ";
		}
		else if ((num / 1000) % 10 == 4)
		{
			std::cout << "������ ������ ";
		}
		else if ((num / 1000) % 10 == 5)
		{
			std::cout << "���� ������ ";
		}
		else if ((num / 1000) % 10 == 6)
		{
			std::cout << "����� ������ ";
		}
		else if ((num / 1000) % 10 == 7)
		{
			std::cout << "���� ������ ";
		}
		else if ((num / 1000) % 10 == 8)
		{
			std::cout << "������ ������ ";
		}
		else if ((num / 1000) % 10 == 9)
		{
			std::cout << "������ ������ ";
		}

		if ((num / 100) % 10 == 1)
		{
			std::cout << "��� ";
		}
		else if ((num / 100) % 10 == 2)
		{
			std::cout << "������ ";
		}
		else if ((num / 100) % 10 == 3)
		{
			std::cout << "������ ";
		}
		else if ((num / 100) % 10 == 4)
		{
			std::cout << "��������� ";
		}
		else if ((num / 100) % 10 == 5)
		{
			std::cout << "������� ";
		}
		else if ((num / 100) % 10 == 6)
		{
			std::cout << "�������� ";
		}
		else if ((num / 100) % 10 == 7)
		{
			std::cout << "������� ";
		}
		else if ((num / 100) % 10 == 8)
		{
			std::cout << "��������� ";
		}
		else if ((num / 100) % 10 == 9)
		{
			std::cout << "��������� ";
		}

		if ((num / 10) % 10 == 1)
		{

			if (num % 10 == 0)
			{
				std::cout << "������ ������";
			}
			else if (num % 10 == 1)
			{
				std::cout << "����������� ������";
			}
			else if (num % 10 == 2)
			{
				std::cout << "���������� ������";
			}
			else if (num % 10 == 3)
			{
				std::cout << "���������� ������";
			}
			else if (num % 10 == 4)
			{
				std::cout << "������������ ������";
			}
			else if (num % 10 == 5)
			{
				std::cout << "����������� ������";
			}
			else if (num % 10 == 6)
			{
				std::cout << "����������� ������";
			}
			else if (num % 10 == 7)
			{
				std::cout << "���������� ������";
			}
			else if (num % 10 == 8)
			{
				std::cout << "������������ ������";
			}
			else if (num % 10 == 9)
			{
				std::cout << "������������ ������";
			}

		}
		else if ((num / 10) % 10 == 2)
		{
			std::cout << "�������� ";
		}
		else if ((num / 10) % 10 == 3)
		{
			std::cout << "�������� ";
		}
		else if ((num / 10) % 10 == 4)
		{
			std::cout << "����� ";
		}
		else if ((num / 10) % 10 == 5)
		{
			std::cout << "��������� ";
		}
		else if ((num / 10) % 10 == 6)
		{
			std::cout << "���������� ";
		}
		else if ((num / 10) % 10 == 7)
		{
			std::cout << "��������� ";
		}
		else if ((num / 10) % 10 == 8)
		{
			std::cout << "����������� ";
		}
		else if ((num / 10) % 10 == 9)
		{
			std::cout << "��������� ";
		}

		if ((num / 1) % 10 == 1)
		{
			std::cout << "���� ";
		}
		else if ((num / 1) % 10 == 2)
		{
			std::cout << "��� ";
		}
		else if ((num / 1) % 10 == 3)
		{
			std::cout << "��� ";
		}
		else if ((num / 1) % 10 == 4)
		{
			std::cout << "������ ";
		}
		else if ((num / 10) % 10 == 5)
		{
			std::cout << "���� ";
		}
		else if ((num / 10) % 10 == 6)
		{
			std::cout << "����� ";
		}
		else if ((num / 10) % 10 == 7)
		{
			std::cout << "���� ";
		}
		else if ((num / 10) % 10 == 8)
		{
			std::cout << "������ ";
		}
		else if ((num / 10) % 10 == 9)
		{
			std::cout << "������ ";
		}
		return 0;
	}
}