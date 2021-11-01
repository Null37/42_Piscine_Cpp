#include "Dog.hpp"

        /* Constructors and destructors */
Dog::Dog( void )
{
    std::cout << "DOG Default Constructor called" << std::endl;
    this->type = "Dog";
    this->_brain = new Brain();
}

Dog::Dog(const Dog& obj)
{
    std::cout << "DOG copy Constructor called" << std::endl;
    this->_brain = new Brain();
    *this = obj;
}

Dog::~Dog()
{
    std::cout << "DOG Default Destructor called" << std::endl;
    delete this->_brain;
}
        /*end* Constructor and Destructor */

    /* getters */
std::string Dog::getType( void ) const
{
    return (this->type);
}

std::string Dog::getIDia(int i) const
{
    return (_brain->getTypeID(i));
}
    /* end  getters*/

 /* setters */
void Dog::setType(std::string type)
{
     this->type = type;
}
    /* end setters */

         /*operators*/
Dog& Dog::operator=(const Dog& obj)
{
    this->type = obj.type;
    *this->_brain = *obj._brain;
    return (*this);
}
    /* end operators */

void Dog::makeSound(void) const
{
    // \033[1;I'm Animal\033[0m\n
    std::cout << "\033[1;32m hah huh hah huh\033[0m" << std::endl;
}