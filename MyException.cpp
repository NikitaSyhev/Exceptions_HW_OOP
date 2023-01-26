#include "MyException.h"

const std::string &MyException::what() const
{
	return _whatStr;
}

const char* MyException::what1() const noexcept
{
	return  "MyException";;
}

