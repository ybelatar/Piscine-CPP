#pragma once
#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <climits>
#include <string>
#include <cstdlib>
#include <sstream>
#include <cmath>

class ScalarConverter
{
    private:
            ScalarConverter();
            ScalarConverter(const ScalarConverter &scalar);
            ~ScalarConverter();
            ScalarConverter &operator=(const ScalarConverter &scalar);
    public:
            static void convert(std::string &str);
};


#endif