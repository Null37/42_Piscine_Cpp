#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>
#include <vector>

template <typename T>
class MutantStack : public std::stack<T>
{
private:
public:
    MutantStack(void){};
    MutantStack(const MutantStack&);
    ~MutantStack(){};
    typedef typename std::stack<T>::container_type::iterator    iterator;
    MutantStack& operator=(const MutantStack&);
    iterator    begin(){return this->c.begin();};
    iterator    end(){return this->c.end();};
};




#endif