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
    *this = obj;
}
Cat::~Cat()
{
    std::cout << "CAT Default Destructor called" << std::endl;
}
            /*end* Constructor and Destructor */
    
        /* getters */
std::string Cat::getType( void )
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
void Cat::operator=(const Cat& obj)
{
    this->type = obj.type;
}

    /* end operators */

void Cat::makeSound(void)
{
    std::cout << "\033[1;33meow meow meow\033[0m" << std::endl;
}