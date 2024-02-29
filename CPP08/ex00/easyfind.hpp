#pragma once
#ifndef EASYFIND_HPP
#define EASYFIND_HPP


#include <iostream>
#include <list>
#include <algorithm>


template<typename T>
int easyfind(const T &container, int i)
{
    if (container.empty())
        throw (std::invalid_argument("Error : empty container"));
    typename T::const_iterator it = std::find(container.begin(), container.end(), i);
    if (it == container.end())
        throw (std::invalid_argument("Error : value not found in container"));
    return (*it);
}


#endif
