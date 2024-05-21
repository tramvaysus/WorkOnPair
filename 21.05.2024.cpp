/*unsigned a = 0b00000011;
   unsigned b = 2;
   unsigned d = 0b11111111'11111111'11111111'11111100;

   std::cout << "(a&b)\t" << (a & b) << std::endl;
   std::cout << "(a|b)\t" << (a | b) << std::endl;
   std::cout << "(a^b)\t" << (a ^ b) << std::endl;
   std::cout << "~d\t" << ~d << std::endl;
   std::cout << "(a << 2)\t" << (a << 2) << std::endl;
   std::cout << "(12 >> 2)\t" << (12 >> 2) << std::endl;*/

#include <iostream>
#include <bitset>

int main()
{
	setlocale(0, "");
	unsigned a = 0b00100000;

	char choose;

	std::cout << "Выберите действие:\n -1- Жильцы не дома\n-2-Жильцы дома\n-3-Вкл/выкл вручную\n";
	std::cin >> choose;

	if (choose == '1')
	{
		std::cout << "Включено отопление: " << std::bitset<8>(a) << " - " << (a) << std::endl;
		std::cout << "Включена сигнализация: " << std::bitset<8>(a | 2) << " - " << (a | 2) << std::endl;
		std::cout << "Выпущены собаки: " << std::bitset<8>(a | 4) << " - " << (a | 4) << std::endl;
		std::cout << "Стейк готов: " << std::bitset<8>(a) << " - " << (a) << std::endl;
		std::cout << "Работает полив: " << std::bitset<8>(a) << " - " << (a) << std::endl;
		
	}
	else if (choose == '2')
	{
		std::cout << "Включено отопление: " << std::bitset<8>(a|1) << " - " << (a | 1) << std::endl;
		std::cout << "Включена сигнализация: " << std::bitset<8>(a) << " - " << (a) << std::endl;
		std::cout << "Выпущены собаки: " << std::bitset<8>(a) << " - " << (a) << std::endl;
		std::cout << "Стейк готов: " << std::bitset<8>(a | 6) << " - " << (a | 6) << std::endl;
		std::cout << "Работает полив: " << std::bitset<8>(a | 8) << " - " << (a | 8) << std::endl;
	}
	else if (choose == '3')
	{
		for (int i = 0; i < 4; i++)
		{
			unsigned int choose;
			char choose_1;
			std::cout << "Выберите функцию которую хотите 1-включить/2-отключить (сейчас все функции выключены):\n";
			std::cin >> choose_1;
			
			if (choose_1 == '1')
			{
				std::cout << "-1- Включено отопление\n";
				std::cout << "-2- Включена сигнализация\n";
				std::cout << "-4- Выпущены собаки\n";
				std::cout << "-6- Стейк готов\n";
				std::cout << "-8- Работает полив\n";
				std::cin >> choose;
				switch (choose)
				{
				case 1: std::cout << "Включено отопление: " << std::bitset<8>(a | 1) << " - " << (a | 1) << std::endl; break;
				case 2: std::cout << "Включена сигнализация: " << std::bitset<8>(a | 2) << " - " << (a | 2) << std::endl; break;
				case 4: std::cout << "Выпущены собаки: " << std::bitset<8>(a | 4) << " - " << (a | 4) << std::endl; break;
				case 6: std::cout << "Стейк готов: " << std::bitset<8>(a | 6) << " - " << (a | 6) << std::endl; break;
				case 8: std::cout << "Работает полив: " << std::bitset<8>(a | 8) << " - " << (a | 8) << std::endl; break;
				}
			}
			else if (choose_1 == '2')
			{
				std::cout << "-1- Включено отопление\n";
				std::cout << "-2- Включена сигнализация\n";
				std::cout << "-4- Выпущены собаки\n";
				std::cout << "-6- Стейк готов\n";
				std::cout << "-8- Работает полив\n";
				std::cin >> choose;
				switch (choose)
				{
				case 1: std::cout << "Включено отопление: " << std::bitset<8>(a) << " - " << (a) << std::endl; break;
				case 2: std::cout << "Включена сигнализация: " << std::bitset<8>(a) << " - " << (a) << std::endl; break;
				case 4: std::cout << "Выпущены собаки: " << std::bitset<8>(a) << " - " << (a) << std::endl; break;
				case 6: std::cout << "Стейк готов: " << std::bitset<8>(a) << " - " << (a) << std::endl; break;
				case 8: std::cout << "Работает полив: " << std::bitset<8>(a) << " - " << (a) << std::endl; break;
				}
			}
			
		}
	}
	else { return 0; }
}
