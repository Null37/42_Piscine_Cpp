#include "convert.hpp"


convert::convert(std::string &str)
{
    this->str = str;
    this->error_char = 0;
    try
    {
        this->ret = std::stoi(str);
    }
    catch(const std::exception& e)
    {
        static_cast<void>(e);
        this->error_char = 1;
    }
}

convert::~convert()
{

}

convert::operator char() const
{
    if(std::isprint(ret) && this->error_char == 0)
        return ret;
    if (this->error_char == 1 && str.length() != 1)
        throw convert::Impossible();
    if (str.length() == 1)
    {
        if (this->error_char == 1)
            return (this->str[0]);
        else if (isprint(this->ret))
            return (this->str[0]);
    }
    throw convert::NOT_printable();
}

convert::operator int() const
{
    if (this->str.length() == 1 && this->error_char == 1)
        return this->str[0];
    return std::stoi(this->str);
}

convert::operator float() const
{
    if (this->str.length() == 1 && this->error_char == 1)
        return this->str[0];
    return std::stof(this->str);
}

convert::operator double() const
{
    if (this->str.length() == 1 && this->error_char == 1)
        return this->str[0];
    return std::stod(this->str);
}

const char *convert::NOT_printable::what() const throw()
{
   return "Non displayable";
}
const char *convert::Impossible::what() const throw()
{
    return "impossible";
}