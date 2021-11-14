#include "span.hpp"

span::span()
{
    this->N = 0;
}

span::span(unsigned int  n)
{
    this->N = n;
}

const char *span::OUT_OF_RANGE::what() const throw()
{
    return "out of range";
}

void span::addNumber(int tobAdd)
{
    if (this->con_V.size() >= this->N)
        throw OUT_OF_RANGE();
    con_V.push_back(tobAdd);
}


void span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    size_t dist = std::distance(begin, end);
    if ((this->con_V.size() + dist) >= this->N)
        throw OUT_OF_RANGE();
    this->con_V.insert(this->con_V.end(), begin, end);
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
    int save = con_V[(con_V.size() - 1)];
    for(it = con_V.begin() + 1; it != con_V.end(); it++)
    {
        if (save > *(it) - *(it -1))
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
    int save = con_V[con_V.size() - 1] - con_V[0];
    return save;
}
span::span(const span& old) : N(old.N), con_V(old.con_V){}

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

std::vector<int>& span::get_v()
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