#include "Animal.hpp"

        /* Constructors and destructors */
Animal::Animal( void )
{
    std::cout << "Animal default Constructor called" << std::endl;
}

Animal::Animal(const Animal& obj)
{
    std::cout << "Animal copy Constructor called" << std::endl;
    *this = obj;
}

Animal::~Animal()
{
    std::cout << "Animal default Destructors called" << std::endl;
}
    /*end* Constructor and Destructor */

    /* getters */
std::string Animal::getType( void )
{
    return (this->type);
}
    /* end  getters*/

 /* setters */
void Animal::setType(std::string type)
{
     this->type = type;
}
    /* end setters */

    /* end operators */
void Animal::operator=(const Animal& obj)
{
    this->type = obj.type;
}
    /* end operators */

void Animal::makeSound(void)
{
    std::cout << "\033[1;31I'm Animal\033[0m\n" << std::endl;
}