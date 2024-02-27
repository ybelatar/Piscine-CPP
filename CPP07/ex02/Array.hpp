#pragma once
#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<class T>  class Array
{
    private:
            T *_array;
            unsigned int _size;
    public:
            Array();
            Array(const unsigned int &size);
            Array(const Array &array);
            ~Array();
            Array<T> &operator=(const Array &array);
            T &operator[](const int &index);
            int size() const;
};

#include "Array.tpp"

#endif