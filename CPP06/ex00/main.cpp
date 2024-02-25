#include "ScalarConverter.hpp"

int main (int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Error" << std::endl << "Wrong number of arguments" << std::endl;
        return (1);
    }
    std::string str = av[1];
    ScalarConverter::convert(str);
}
