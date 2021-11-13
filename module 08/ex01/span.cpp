#include "span.hpp"

span::span()
{
    this->N = 0;
}

span::span(unsigned int  N)
{
    this->N =  N;
}

const char *span::OUT_OF_RANGE::what() const throw()
{
    return "out of range";
}

void span::addNumbe(int tobAdd)
{
    if (this->con_V.size() >= this->N)
        throw OUT_OF_RANGE();
    con_V.push_back(tobAdd);
}

const char *span::CANT_SPAN::what() const throw()
{
    return "can't span :(";
}

uint  span::shortestSpan()
{
    std::sort(con_V.begin(), con_V.end());
    std::vector<int>::iterator it;
    if (con_V.size() == 0 || con_V.size() == 1)
        throw CANT_SPAN();
    uint save = abs(con_V[(con_V.size() - 1)]);
    for(it = con_V.begin() + 1; it != con_V.end(); it++)
    {
        if (save > abs(*(it) - *(it -1)))
            save = *(it) - *(it -1);
    }
    return save;
}

uint span::longestSpan()
{
    std::sort(con_V.begin(), con_V.end());
    std::vector<int>::iterator it;
    if (con_V.size() == 0 || con_V.size() == 1)
        throw CANT_SPAN();
    uint save = abs(con_V[con_V.size() - 1] - con_V[0]);
    return save;
}
span::span(const span& old) : con_V(old.con_V), N(old.N){}

span& span::operator=(const span& old)
{
    std::vector<int> con_V = old.con_V;
    this->N = old.N;
    return *this;
}

span::~span()
{
}

int span::get_N()
{
    return N;
}

std::vector<int> span::get_v() const
{
    return (this->con_V);
}

void span::set_N(int n)
{
    N = n;
}
void span::set_V(int index, int number)
{
    con_V[index] = number;
}