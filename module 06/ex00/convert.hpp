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
    class NOT_printable: public std::exception
    {
        const char *what() const throw();
    };
    operator char() const;
    operator int() const;
    operator float() const;
    operator double() const;
};


#endif