#pragma once
#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T, typename U, typename W>

void iter(T *array, U length, W fn)
{
    for (U i = 0; i < length; i++)
    {
        fn(array[i]);
    }
}


#endif