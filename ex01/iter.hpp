
template<typename tisch>
void iter(tisch* arr, size_t n, void(*foo)(tisch))
{
	for (size_t i = 0; i < n; i++)
	{
		foo(*arr);
		arr++;
	}
	std::cout << std::endl;
	
}