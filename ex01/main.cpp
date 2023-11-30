#include <iostream>
#include "iter.hpp"


void a(int a)
{
	std::cout << a << std::endl;
}

void a(char a)
{
	std::cout << a << std::endl;
}

template<typename socreative>
void foo(socreative s)
{
	std::cout << "." << s;
}

int main()
{
	//Int array
	int arra[] = {1, 2, 3, 5};
	iter(arra, 4, a);
	
	//Char array
	char arrb[] = {'a', '3', '='};
	iter(arrb, 3, a);

	//Int array with an instantiated function template 
	iter(arra, 3, foo<int>);

	return 0;
}
