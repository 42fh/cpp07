#pragma once

#include <iostream>
#include <cstdlib>

template <typename T>
class Array
{
private:
	unsigned int numberOfElements;
	T *arr;

public:
	Array();
	Array(unsigned int n);
	Array(Array<T> &a);
	Array<T> &operator=(Array<T> rhs);
	~Array();
	T &operator[](unsigned int n);
	T operator[](unsigned int n) const;

	unsigned int size() const;
	class OutOfBound : public std::exception
	{
	};
};

template <typename T>
Array<T>::Array() : numberOfElements(0), arr(NULL)
{
}

template <typename T>
Array<T>::Array(unsigned int n) : numberOfElements(n)
{
	arr = new T[n]();
}

template <typename T>
Array<T>::Array(Array<T> &other) : numberOfElements(other.numberOfElements)
{
	this->arr = new T[numberOfElements]();
	for (unsigned int i = 0; i < numberOfElements; i++)
	{
		this->arr[i] = other.arr[i];
	}
}

template <typename T>
Array<T>::~Array()
{
	delete[] this->arr;
}

template <typename T>
unsigned int Array<T>::size() const
{
	return numberOfElements;
}

template <typename T>
Array<T> &Array<T>::operator=(Array<T> rhs)
{
	delete[] this->arr;

	this->numberOfElements = rhs.numberOfElements;
	this->arr = new T[this->numberOfElements]();
	for (unsigned int i = 0; i < numberOfElements; i++)
	{
		this->arr[i] = rhs.arr[i];
	}
	return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int n)
{
	if (n >= numberOfElements || numberOfElements == 0)
	{
		throw OutOfBound();
	}
	return arr[n];
}

template <typename T>
T Array<T>::operator[](unsigned int n) const
{
	if (n >= numberOfElements)
	{
		throw OutOfBound();
	}
	return arr[n];
}
