#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <vector>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
private:
public:
    MutantStack() {};
    ~MutantStack() {};

    //typedef typename std::vector<T>::iterator    iterator;
    typedef typename std::stack<T>::container_type::iterator    iterator;

    iterator    begin() {return this->c.beghin()}
    iterator    end() {return this->c.end();}
};




#endif