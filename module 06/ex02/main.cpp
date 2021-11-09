#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base * generate(void)
{
    srand(time(0));
    int result = 1 + rand() % 3;
    Base *ptrA;
    switch (result)
    {
        case 1:
            ptrA = new A;
            break;
        case 2:
            ptrA = new B;
            break;
        case 3:
            ptrA= new C;
            break;
    }
    return (ptrA);
} 

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
}
void identify(Base& p)
{
    try
    {
        p = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch(const std::bad_cast & e)
    {
        static_cast<void>(e);
    }
    try
    {
        p = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
    }
    catch(const std::bad_cast& e)
    {
        static_cast<void>(e);
    }
    try
    {
        p = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    }
    catch(const std::bad_cast & e)
    {
        static_cast<void>(e);
    }
}

int main(void)
{
    Base *test = generate();
    Base &test2 = *test;
    identify(test);
    identify(test2);
    delete test;
    return 0;
}