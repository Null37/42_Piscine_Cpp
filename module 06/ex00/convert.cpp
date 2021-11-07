#include "convert.hpp"

convert::convert(std::string &str)
{
    this->str = str;
}

convert::~convert()
{

}

convert::operator char() const
{
    return 0;
}

convert::operator int() const
{
    return std::stoi(this->str);
}

convert::operator float() const
{
    return std::stof(this->str);
}

convert::operator double() const
{
    return std::stod(this->str);
}