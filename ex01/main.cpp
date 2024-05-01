#include <iostream>
#include "iter.hpp"

void a(int a)
{
	std::cout << a << ' ';
}

void a(char a)
{
	std::cout << a << ' ';
}

template <typename socreative>
void foo(socreative s)
{
	std::cout << "." << s;
}

int main()
{
	std::cout << "Int array: \n";
	int arra[] = {2, 4, 6, 8};
	iter(arra, 4, a);

	std::cout << "\n\n" "Char array: \n";
	char arrb[] = {'*', '%', '@'};
	iter(arrb, 3, a);

	std::cout << "\n\n" "Int array with an instantiated function template: \n";
	iter(arra, 3, foo<int>);

	std::cout << std::endl;
}
