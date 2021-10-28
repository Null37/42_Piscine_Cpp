#include "Cat.hpp"

        /* Constructors and destructors */
Cat::Cat( void )
{
    std::cout << "CAT Default Constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat& obj)
{
    std::cout << "CAT copy Constructor called" << std::endl;
    this->type = obj.type;
}
Cat::~Cat()
{
    std::cout << "CAT Default Destructor called" << std::endl;
}
            /*end* Constructor and Destructor */
    
        /* getters */
std::string Cat::getType( void ) const
{
    return (this->type);
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
    return (*this);
}

    /* end operators */

void Cat::makeSound(void) const 
{
    std::cout << "\033[1;33m meow meow meow\033[0m" << std::endl;
}