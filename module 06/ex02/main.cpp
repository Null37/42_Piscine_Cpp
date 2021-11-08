#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <iostream>
#include "Base.hpp"


Base * generate(void)
{
    srand(time(0));
    int result = 1 + rand() % 3;
    switch (result)
    {
        case 1:
        
            break;
        case 2:
            break;
        case 3:
            break;
    }
}


int main(void)
{
    srand(time(0));
    int result = 1 + rand() % 3;
    printf("%d \n", result);
    return 0;
}