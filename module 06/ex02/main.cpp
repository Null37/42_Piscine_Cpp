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

}
void identify(Base& p)
{
    
}

int main(void)
{

    return 0;
}