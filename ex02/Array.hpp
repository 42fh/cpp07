#pragma once

#include <iostream>

template<typename t>
class Array
{
private:
	unsigned int numberOfElements;
	t* arr;
public:
	Array();
	Array(unsigned int n);
	Array(Array<t>& a);
	Array<t>& operator=(Array<t> rhs);
	~Array();
	t& operator[](unsigned int n);
	t operator[](unsigned int n) const;

	unsigned int size();
	class OutOfBound: public std::exception{};
};

template<typename t> 
Array<t>::Array(): numberOfElements(0), arr(NULL)
{
}

template<typename t> 
Array<t>::Array(unsigned int n): numberOfElements(n)
{	
	arr = new t[n]();
}

template<typename t> 
Array<t>::Array(Array<t>& other): numberOfElements(other.numberOfElements)
{
	this->arr = new t[numberOfElements]();
	for (unsigned int i = 0; i < numberOfElements; i++)
	{
		this->arr[i] = other.arr[i];
	}
}

template<typename t> 
Array<t>::~Array()
{
	delete[] this->arr;
}

template<typename t> 
unsigned int Array<t>::size()
{
	return numberOfElements;
}

template<typename t> 
Array<t>& Array<t>::operator=(Array<t> rhs)
{
	delete[] this->arr;

	this->numberOfElements = rhs.numberOfElements;
	this->arr = new t[this->numberOfElements]();
	for (unsigned int i = 0; i < numberOfElements; i++)
	{
		this->arr[i] = rhs.arr[i];
	}
	return *this;
}

template<typename t> 
t& Array<t>::operator[](unsigned int n)
{
	if (n >= numberOfElements || numberOfElements == 0)
	{
		throw OutOfBound();
	}
	return arr[n];
}

template<typename t> 
t Array<t>::operator[](unsigned int n) const
{
	if (n >= numberOfElements)
	{
		throw OutOfBound();
	}
	return arr[n];
}
