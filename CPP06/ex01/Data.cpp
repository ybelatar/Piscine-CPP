#include "Data.hpp"

Data::Data():
    _name("random")
{}

Data::Data(const std::string &name):
    _name(name)
{}

Data::Data(const Data &data)
{
    *this = data;
}

Data::~Data()
{}

Data &Data::operator=(const Data &data)
{
    _name = data.getName();
    return (*this);
}

const std::string &Data::getName() const
{
    return (_name);
}