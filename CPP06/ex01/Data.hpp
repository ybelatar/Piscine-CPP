#pragma once
#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class Data
{
    private:
            std::string _name;
    public:
            Data();
            Data(const std::string &name);
            Data(const Data &data);
            ~Data();
            Data &operator=(const Data &data);
            const std::string &getName() const;
};

#endif
