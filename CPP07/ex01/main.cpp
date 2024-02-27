#include "iter.hpp"

void	ft_putstr_endl(std::string str)
{
	std::cout << str << std::endl;
}

int	main( void )
{
	std::string *array;
	array = new std::string[5];
	array[0] = "Bonjour";
	array[1] = "tout";
	array[2] = "le";
	array[3] = "monde";
	array[4] = ".";
	iter<std::string, int, void(std::string)>(array, 5, ft_putstr_endl);
	delete[] array;
	return (0);
}