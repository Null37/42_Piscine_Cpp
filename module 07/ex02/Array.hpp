#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
private:
    size_t  _size;
    T       *ptr_a;
public:
    Array();
    Array(unsigned int n);
    Array(const Array& old);
    Array& operator= (const Array& old);
    T& operator[] (size_t index);
    ~Array();
    class OUT_OF_RANGE: public std::exception
    {
        const char *what() const throw();
    };
    unsigned  int  size() const;
};

template<typename T>
Array<T>::Array()
{
    std::cout << "constructor called" << std::endl;
    ptr_a = new T[0];
    _size = 0;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
    std::cout << "constructor int  called" << std::endl;
    ptr_a = new T[n];
    _size = n;
}

template<typename T>
unsigned  int   Array<T>::size() const {
    return (_size);
}

template<typename T>
Array<T>::~Array()
{
    std::cout << "destructor called" << std::endl;
    delete[] ptr_a;
}

template<typename T>
Array<T>::Array(const Array& old)
{
    std::cout << "constructor copy called" << std::endl;
    *this =  old;
}

template<typename T>
Array<T>& Array<T>::operator= (const Array& old)
{
    this->_size = old._size;
    this->ptr_a = new T[_size];
    return (*this);
}

template<typename T>
const char * Array<T>::OUT_OF_RANGE::what() const throw()
{
    return "out of range <abort>";
}

template<typename T>
T& Array<T>::operator[] (size_t index)
{
    if (index > this->_size)
        throw OUT_OF_RANGE();
    return (this->ptr_a[index]);
}


#endif