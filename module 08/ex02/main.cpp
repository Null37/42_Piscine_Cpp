#include "mutantstack.hpp"

#include <list>

int main()
{
    MutantStack<int> mstack, test;
    /////test swap
    
    test.push(500);
    test.push(90);
    test.push(900);
    std::cout << "test size ==> "<<test.size() << std::endl;

    mstack.push(20);
    mstack.push(17);
    //std::cout << mstack.top() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(80);
    mstack.swap(test);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    //std::cout << *it << std::endl;
    ++it;
    --it;
    //std::cout << *ite << std::endl;  
    while (it != ite)
    {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << std::endl;
    MutantStack<int>::iterator it_t = test.begin();
    MutantStack<int>::iterator ite_t = test.end();
    //std::cout << *it << std::endl;
    //std::cout << *ite << std::endl;  
    while (it_t != ite_t)
    {
        std::cout << "test == > " << *it_t << std::endl;;
        ++it_t;
    }
    std::cout << "test size ==> "<<test.size() << std::endl;
    std::stack<int> s(mstack);
    MutantStack<int>::iterator it_test;
    MutantStack<int>::iterator ite_test = test.end();
    for(it_test = test.begin(); it_test != ite_test; it_test++)
        test.pop();
    test.push(10);
    if (test.empty() == true)
        std::cout << "is empty" << std::endl;
    else
        std::cout << "not empty" << std::endl;
    return 0;
}