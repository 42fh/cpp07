#include <iostream>
#include "whatever.hpp"

int main()
{
	int a = 7;
	int b = 8;
	swap(a, b);
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	swap(a, a);

	std::cout << "min: " << min(a, b) << std::endl;
	std::cout << "max: " << max(a, b) << std::endl;


	return 0;
}
