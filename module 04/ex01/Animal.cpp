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
std::string Animal::getType( void ) const
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
Animal& Animal::operator=(const Animal& obj)
{
    this->type = obj.type;
    return (*this);
}
    /* end operators */

void Animal::makeSound(void) const
{
    //std::cout << "\033[1;31mbold red text\033[0m\n";
    std::cout << "\033[1;31m I'm Animal\033[0m\n";
}