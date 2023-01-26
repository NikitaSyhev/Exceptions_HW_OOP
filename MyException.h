#pragma once

#include <iostream>
#include <string>
class MyException
{
public:
	MyException() {};


	const std::string &what() const;

	const char* what1() const noexcept;


private:
	std::string _whatStr = "whatStr";
};

