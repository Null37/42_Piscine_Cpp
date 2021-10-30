#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    {
        std::cout << "----------test 1-------" << std::endl;
        Animal *array[2];
        std::cout << "----------1-------" << std::endl;
        array[0] = new Dog();
        std::cout << "----------2-------" << std::endl;
        array[1] = new Cat();
        std::cout << "-----------3------" << std::endl;

        for (int i = 0; i < 2; i++)
        {
             std::cout << "---------D--------" << std::endl;
            delete array[i];
        }
    }
    ///test deep copy
    {
        std::cout << "---------test 2--------" << std::endl;
        Dog b;
        std::cout << "----------1-------" << std::endl;
        {
            Dog A(b);
        std::cout << "----------2-------" << std::endl;

            // A will be deleted
            // If = is shallow copy, b will be deleted too
        }
        std::cout << b.getIDia(0) << std::endl;
    }
    {
        std::cout << "---------test 3--------" << std::endl;
        const Animal* j = new Dog();
        std::cout << "----------1-------" << std::endl;
        const Animal* i = new Cat();
        std::cout << "----------2-------" << std::endl;



        delete j;//should not create a leak
        std::cout << "----------D-------" << std::endl;
        delete i;
    }
}
