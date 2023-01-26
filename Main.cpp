//Этот проект создан с помощью классического шаблона
#include <iostream>
#include"MyException.h"
#include"MyException.h"

int main() {
	setlocale(LC_ALL, "Russian");



	//Part 1
	const size_t SIZE = 3000000000ul;
	char* ptr = NULL;

	try
	{
		ptr = new char[SIZE];
		std::cout << "Memory is used w\o failure." << std::endl;
	}
	catch (std::bad_alloc& ba)
	{
		std::cout << "BA:" << ba.what() << std::endl;
	}

	delete[] ptr;





	//Part 2
	MyException ME;
	try
	{
		ME.what1();
	}
	catch (const std::exception& me)
	{
		std::cerr << me.what() << std::endl;
	}








	return 0;
}