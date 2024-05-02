template <typename T>
void iter(T *arr, const size_t n, void (*foo)(T))
{
	if (arr == NULL || foo == NULL)
		throw(std::exception());

	for (size_t i = 0; i < n; i++)
	{
		foo(*arr);
		arr++;
	}
}

template <typename T>
void iter(const T *arr, const size_t n, void (*foo)(const T))
{
	if (arr == NULL || foo == NULL)
		throw(std::exception());

	for (size_t i = 0; i < n; i++)
	{
		foo(*arr);
		arr++;
	}
}

template <typename T>
void iter(T *arr, const size_t n, void (*foo)(T&))
{
	if (arr == NULL || foo == NULL)
		throw(std::exception());

	for (size_t i = 0; i < n; i++)
	{
		foo(*arr);
		arr++;
	}
}

template <typename T>
void iter(const T *arr, const size_t n, void (*foo)(const T&))
{
	if (arr == NULL || foo == NULL)
		throw(std::exception());

	for (size_t i = 0; i < n; i++)
	{
		foo(*arr);
		arr++;
	}
}