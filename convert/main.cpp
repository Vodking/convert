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
			std::cout << "Введите число от 1 до 9999: \n";
			std::cin >> num;
		} while (num < 1 || num > 9999);

		if ((num / 1000) % 10 == 1)
		{
			std::cout << "Одна тысяча ";
		}
		else if ((num / 1000) % 10 == 2)
		{
			std::cout << "Две тысячи ";
		}
		else if ((num / 1000) % 10 == 3)
		{
			std::cout << "Три тысячи ";
		}
		else if ((num / 1000) % 10 == 4)
		{
			std::cout << "Четыре тысячи ";
		}
		else if ((num / 1000) % 10 == 5)
		{
			std::cout << "Пять тысячь ";
		}
		else if ((num / 1000) % 10 == 6)
		{
			std::cout << "Шесть тысячь ";
		}
		else if ((num / 1000) % 10 == 7)
		{
			std::cout << "Семь тысячь ";
		}
		else if ((num / 1000) % 10 == 8)
		{
			std::cout << "Восемь тысячь ";
		}
		else if ((num / 1000) % 10 == 9)
		{
			std::cout << "Девять тысячь ";
		}

		if ((num / 100) % 10 == 1)
		{
			std::cout << "Сто ";
		}
		else if ((num / 100) % 10 == 2)
		{
			std::cout << "Двести ";
		}
		else if ((num / 100) % 10 == 3)
		{
			std::cout << "Триста ";
		}
		else if ((num / 100) % 10 == 4)
		{
			std::cout << "Четыреста ";
		}
		else if ((num / 100) % 10 == 5)
		{
			std::cout << "Пятьсот ";
		}
		else if ((num / 100) % 10 == 6)
		{
			std::cout << "Шестьсот ";
		}
		else if ((num / 100) % 10 == 7)
		{
			std::cout << "Семьсот ";
		}
		else if ((num / 100) % 10 == 8)
		{
			std::cout << "Восемьсот ";
		}
		else if ((num / 100) % 10 == 9)
		{
			std::cout << "Девятьсот ";
		}

		if ((num / 10) % 10 == 1)
		{

			if (num % 10 == 0)
			{
				std::cout << "Десять рублей";
			}
			else if (num % 10 == 1)
			{
				std::cout << "Одиннадцать рублей";
			}
			else if (num % 10 == 2)
			{
				std::cout << "Двенадцать рублей";
			}
			else if (num % 10 == 3)
			{
				std::cout << "Тринадцать рублей";
			}
			else if (num % 10 == 4)
			{
				std::cout << "четырнадцать рублей";
			}
			else if (num % 10 == 5)
			{
				std::cout << "пятьнадцать рублей";
			}
			else if (num % 10 == 6)
			{
				std::cout << "шестнадцать рублей";
			}
			else if (num % 10 == 7)
			{
				std::cout << "семнадцать рублей";
			}
			else if (num % 10 == 8)
			{
				std::cout << "восемнадцать рублей";
			}
			else if (num % 10 == 9)
			{
				std::cout << "девятнадцать рублей";
			}

		}
		else if ((num / 10) % 10 == 2)
		{
			std::cout << "Двадцать ";
		}
		else if ((num / 10) % 10 == 3)
		{
			std::cout << "Тридцать ";
		}
		else if ((num / 10) % 10 == 4)
		{
			std::cout << "Сорок ";
		}
		else if ((num / 10) % 10 == 5)
		{
			std::cout << "Пятьдесят ";
		}
		else if ((num / 10) % 10 == 6)
		{
			std::cout << "Шестьдесят ";
		}
		else if ((num / 10) % 10 == 7)
		{
			std::cout << "Семьдесят ";
		}
		else if ((num / 10) % 10 == 8)
		{
			std::cout << "Восемьдесят ";
		}
		else if ((num / 10) % 10 == 9)
		{
			std::cout << "Девяносто ";
		}

		if ((num / 1) % 10 == 1)
		{
			std::cout << "Один ";
		}
		else if ((num / 1) % 10 == 2)
		{
			std::cout << "Два ";
		}
		else if ((num / 1) % 10 == 3)
		{
			std::cout << "Три ";
		}
		else if ((num / 1) % 10 == 4)
		{
			std::cout << "Четыре ";
		}
		else if ((num / 10) % 10 == 5)
		{
			std::cout << "Пять ";
		}
		else if ((num / 10) % 10 == 6)
		{
			std::cout << "Шесть ";
		}
		else if ((num / 10) % 10 == 7)
		{
			std::cout << "Семь ";
		}
		else if ((num / 10) % 10 == 8)
		{
			std::cout << "Восемь ";
		}
		else if ((num / 10) % 10 == 9)
		{
			std::cout << "Девять ";
		}
		return 0;
	}
}