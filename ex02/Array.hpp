#include <iostream>

template<typename t>
class Array
{
public:
	Array();
	Array(unsigned int n);
	Array(Array<t>& a);
	Array<t>& operator=(Array<t> rhs);
	~Array();
	t operator[](unsigned int n);

	unsigned int size();
};

template<typename t> 
Array<t>::Array()
{
	std::cout << "im an array" << std::endl;
}

template<typename t> 
Array<t>::Array(unsigned int n)
{
	std::cout << "im n'n unsigned int n array" << n << std::endl;
}

template<typename t> 
Array<t>::Array(Array<t>& a)
{
	(void) a;
	std::cout << "im a template array" << std::endl;
}

template<typename t> 
Array<t>::~Array()
{
	std::cout << "im a wiggle array" << std::endl;
}

template<typename t> 
unsigned int Array<t>::size()
{
	return 11;
}

template<typename t> 
Array<t>& Array<t>::operator=(Array<t> rhs)
{
	(void) rhs;
	return *this;
}

template<typename t> 
t Array<t>::operator[](unsigned int n)
{
	(void) n;
	return 70;
}

