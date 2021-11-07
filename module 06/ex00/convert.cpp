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

bool is_number(std::string &str)
{
    for (size_t i = 0; str[i]; i++)
    {
        if (isdigit(str[i]))
            i++;
        else
            return false;
    }
    return (true);  
}

const char *convert::NOT_printable::what() const throw()
{
   return "Non displayable";
}