#include "mutantstack.hpp"

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& old): std::stack<T>(old)
{
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& old)
{
    this->c = old->c;
    return *this;
}