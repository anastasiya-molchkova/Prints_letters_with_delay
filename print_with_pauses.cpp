/*Программа выводит на экран сообщение в "телеграфном" стиле: 
буквы сообщения должны появляться по одной, с некоторой задержкой  */

#include <iostream>
#include <string>
#include <Windows.h> // для Sleep

int main()
{
	setlocale(LC_CTYPE, "rus");  // для вывода сообщений на кириллице

	const std::string text{ "Привет, эта программа печатает текст с паузами" };

	for (unsigned i{ 0 }; i < text.length(); i++)
	{
		std::cout << text[i];
		Sleep(250);              // функция задержки программы для Windows, ждём указанное количество милисекунд
	}
	std::cout << std::endl;

	return 0;
}