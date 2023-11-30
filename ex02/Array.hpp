#include <iostream>

template<typename t>
class Array
{
public:
	// void foo(t a)
	// {
	// 	std::cout << a ;
	// }
	void foo(t a);
};

template<typename t>
void Array<t>::foo(t a)
{
	std::cout << a ;
}
