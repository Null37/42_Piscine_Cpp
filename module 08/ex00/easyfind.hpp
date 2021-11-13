#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
#include <array>

class NOT_FOUND: public std::exception
{
    const char* what() const throw();
};

template<typename T>
void easyfind(T container, int find)
{
    typename T::iterator it;
    it = std::find(container.begin(), container.end(), find);
    if (it ==  container.end())
        throw NOT_FOUND();
    std::cout << "easy find :) => " << *it << std::endl;
}



#endif