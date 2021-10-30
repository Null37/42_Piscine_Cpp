#include "Cat.hpp"

        /* Constructors and destructors */
Cat::Cat( void )
{
    std::cout << "CAT Default Constructor called" << std::endl;
    this->type = "Cat";
    this->_brain = new Brain();
}

Cat::Cat(const Cat& obj)
{
    std::cout << "CAT copy Constructor called" << std::endl;
    this->type = obj.type;
    this->_brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "CAT Default Destructor called" << std::endl;
    delete this->_brain;
}
            /*end* Constructor and Destructor */

        /* getters */
std::string Cat::getType( void ) const
{
    return (this->type);
}

std::string Cat::getIDia(int i)
{
    return (_brain->getTypeID(i));
}
    /* end  getters*/

 /* setters */
void Cat::setType(std::string type)
{
     this->type = type;
}
    /* end setters */

    /*operators*/
Cat& Cat::operator=(const Cat& obj)
{
    this->type = obj.type;
    this->_brain = obj._brain;
    return (*this);
}

    /* end operators */

void Cat::makeSound(void) const 
{
    std::cout << "\033[1;33m meow meow meow\033[0m" << std::endl;
}