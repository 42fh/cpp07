#include <iostream>
#include "Array.hpp"

int main()
{
	Array<int> myarr1;
	Array<int> myarr2(myarr1);
	Array<int> myarr3(123);

	std::cout << myarr1.size() << std::endl;
	std::cout << myarr1[3] << std::endl;

	//char
	Array<char> myarr4(123);
	std::cout << myarr4[3] << std::endl;

	(void) myarr1;
	(void) myarr2;
	(void) myarr3;
	return 0;
}
