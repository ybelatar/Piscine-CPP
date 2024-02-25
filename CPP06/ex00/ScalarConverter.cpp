#include "ScalarConverter.hpp"

static inline bool isPseudoLiteral(std::string &str)
{
    if (str == "nan" || str == "nanf")
    {
        std::cout << "char : impossible" << std::endl;
        std::cout << "int : impossible" << std::endl;
        std::cout << "float : nanf" << std::endl;
        std::cout << "double : nan" << std::endl;
    }
    else if (str == "-inf" || str == "-inff")
    {
        std::cout << "char : impossible" << std::endl;
        std::cout << "int : impossible" << std::endl;
        std::cout << "float : -inff" << std::endl;
        std::cout << "double : -inf" << std::endl;
    }
    else if (str == "+inf" || str == "+inff")
    {
        std::cout << "char : impossible" << std::endl;
        std::cout << "int : impossible" << std::endl;
        std::cout << "float : +inff" << std::endl;
        std::cout << "double : +inf" << std::endl;
    }
    else
        return (0);
    return (1);
}


static inline void displayChar(std::string &str)
{
    if (str.size() == 1 && !std::isdigit(str[0]))
        std::cout << "char : " << static_cast<char>(str[0]) << std::endl;
    else
    {
        char *endptr;
        long n = std::strtol(str.c_str(), &endptr, 10);
        std::cout << "char : ";
        //if (*endptr || !str.size())
        //    throw std::invalid_argument("impossible");
        if (errno == ERANGE)
            throw std::invalid_argument("impossible");
        if (n < 0 || n > 127)
            throw std::invalid_argument("impossible");
        if (!std::isprint(n))
            throw std::invalid_argument("Non displayable");
        std::cout << "" << static_cast<char>(n) << std::endl;
    }
}

static inline void displayInt(std::string &str)
{
    char *endptr;
    long n = std::strtol(str.c_str(), &endptr, 10);
    std::cout << "int : ";
    //if (*endptr || !str.size())
    //    throw std::invalid_argument("impossible");
    if (n < INT_MIN || n > INT_MAX)
        throw std::invalid_argument("overflow");
    std::cout << "" << static_cast<int>(n) << std::endl;
}

static inline void displayFloat(std::string &str)
{
    char *endptr;
    float n = std::strtof(str.c_str(), &endptr);
    std::cout << "float : ";
    //if (*endptr || !str.size())
    //    throw std::invalid_argument("impossible");
    if (errno == ERANGE)
            throw std::out_of_range("overflow");
    std::cout << "" << static_cast<float>(n);
    if (std::roundf(n) == n)
        std::cout << ".0";
    std::cout << "f" << std::endl;
}

static inline void displayDouble(std::string &str)
{
    char *endptr;
    double n = std::strtod(str.c_str(), &endptr);
    std::cout << "double : ";
    //if (*endptr || !str.size())
    //    throw std::invalid_argument("impossible");
    if (errno == ERANGE)
            throw std::out_of_range("overflow");
    std::cout << "" << static_cast<double>(n);
    if (std::roundf(n) == n)
        std::cout << ".0";
    std::cout << std::endl;
}

ScalarConverter::ScalarConverter()
{}

ScalarConverter::ScalarConverter(const ScalarConverter &scalar)
{
    *this = scalar;
}

ScalarConverter::~ScalarConverter()
{}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &scalar)
{
    (void)scalar;
    return (*this);
}

void ScalarConverter::convert(std::string &str)
{
    if (isPseudoLiteral(str))
        return ;
    try
    {
        displayChar(str);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        displayInt(str);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        displayFloat(str);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        displayDouble(str);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
