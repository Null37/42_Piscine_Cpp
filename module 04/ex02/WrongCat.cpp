#include "WrongCat.hpp"

        /* Constructors and destructors */
WrongCat::WrongCat( void )
{
    std::cout << "WrongCat Default Constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& obj)
{
    std::cout << "WrongCat copy Constructor called" << std::endl;
    this->type = obj.type;
}
WrongCat::~WrongCat()
{
    std::cout << "WrongCat Default Destructor called" << std::endl;
}
            /*end* Constructor and Destructor */
    
        /* getters */
std::string WrongCat::getType( void ) const
{
    return (this->type);
}
    /* end  getters*/

 /* setters */
void WrongCat::setType(std::string type)
{
     this->type = type;
}
    /* end setters */

    /*operators*/
WrongCat& WrongCat::operator=(const WrongCat& obj)
{
    this->type = obj.type;
    return (*this);
}

    /* end operators */

void WrongCat::makeSound(void) const 
{
    std::cout << "\033[1;33m meow meow meow\033[0m" << std::endl;
}