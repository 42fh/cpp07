#include <iostream>
#include "Array.hpp"


template<typename ty>
void test()
{
	std::cout << "Construction with no parameter" << std::endl;
	Array<ty> myarr1;
	std::cout << "Copy construction" << std::endl;
	Array<ty> myarr2(myarr1);
	Array<ty> myarr3(3);
	Array<ty> myarr4(myarr3);


	std::cout << "Size of default construtor" << std::endl;
	std::cout << myarr1.size() << std::endl;

	for (size_t i = 0; i < 3; i++)
	{
		myarr3[i] = 70 + i;
	}
	
	std::cout << "trying to access invalid pos 2" << std::endl;
	try
	{
		std::cout << myarr1[2] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "trying to access invalid pos -1 " << std::endl;
	try
	{
		std::cout << myarr1[-1] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "copy assignment operator" << std::endl;
	myarr1 = myarr3;

	std::cout << "accessing valid position" << std::endl;
	try
	{
		ty n = myarr1[2];
		std::cout << "myarr1[2] is " << n << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main()
{
	std::cout << "========== testing for int" << std::endl;
	test<int>();
	std::cout << "========== testing for unsigned int" << std::endl;
	test<unsigned int>();
	std::cout << "========== testing for char" << std::endl;
	test<char>();

	return 0;
}
