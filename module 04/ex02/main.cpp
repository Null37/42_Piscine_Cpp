#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
  
    Animal  test;
    //           test 1 
    {
        std::cout << "\033[1;32m ---------- test 1-------\033[0m" << std::endl;
        Animal *array[2];
        std::cout << "\033[1;32m----------1-------\033[0m" << std::endl;
        array[0] = new Dog();
        std::cout << "\033[1;32m----------2-------\033[0m" << std::endl;
        array[1] = new Cat();
        std::cout << "\033[1;32m-----------3------\033[0m" << std::endl;

        for (int i = 0; i < 2; i++)
        {
             std::cout << "\033[1;32m---------D--------\033[0m" << std::endl;
            delete array[i];
        }
    }
    ///test 2 deep copy
        std::cout << "\033[1;32m---------test 2--------\033[0m" << std::endl;
        Cat b;
        {
            std::cout << "\033[1;32m----------1-------\033[0m" << std::endl;
            Cat A(b);
 
            std::cout << "\033[1;32m----------2-------\033[0m" << std::endl;
            // A will be deleted
            // If = is shallow copy, b will be deleted too
        }
        std::cout << b.getIDia(0) << std::endl;
    {
        std::cout << "\033[1;32m---------test 3--------\033[0m" << std::endl;
        const Animal* j = new Dog();
        std::cout << "\033[1;32m----------1-------\033[0m" << std::endl;
        const Animal* i = new Cat();
        std::cout << "\033[1;32m----------2-------\033[0m" << std::endl;

        delete j;//should not create a leak
        std::cout << "\033[1;32m-----------D-------\033[0m" << std::endl;
        delete i;
    }

    
}
