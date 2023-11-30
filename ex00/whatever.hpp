#pragma once

template<typename T>
void swap(T& a, T& b)
{
	if (&a == &b)
		return ;
	T c;
	c = a;

	a = b;
	b = c;
}

template<typename T>
T max(T a, T b)
{
	if (a < b)
		return (b);
	else
		return (a);
}

template<typename T>
T min(T a, T b)
{
	if (a > b)
		return (b);
	else
		return (a);
}