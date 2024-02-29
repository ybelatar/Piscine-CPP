#include "easyfind.hpp"

int main ()
{
    std::list<int> l = {7, 5, 16, 8};

    try
    {
        std::cout << easyfind(l, 16) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::cout << easyfind(l, 19) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::list<int> test = {};
    try
    {
        std::cout << easyfind(test, 16) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}