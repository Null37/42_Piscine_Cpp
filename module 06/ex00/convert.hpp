#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>

class convert
{
private:
    std::string str;
    int ret;
    bool error_char;
public:
    convert(std::string &str);
    ~convert();
    class NOT_printable: public std::exception
    {
        const char *what() const throw();
    };
    class Impossible: public std::exception
    {
        const char *what() const throw();
    };
    operator char()const;
    operator int() const;
    operator float() const;
    operator double() const;
};

bool is_number(std::string &str);
#endif