#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>

class convert
{
private:
    std::string str;
public:
    convert(std::string &str);
    ~convert();
    operator char() const;
    operator int() const;
    operator float() const;
    operator double() const;
};


#endif