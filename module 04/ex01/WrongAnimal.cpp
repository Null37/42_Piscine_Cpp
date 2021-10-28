#include "WrongAnimal.hpp"

        /* Constructors and destructors */
WrongAnimal::WrongAnimal( void )
{
    std::cout << "WrongAnimal default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
    std::cout << "WrongAnimal copy Constructor called" << std::endl;

   *this = obj;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal default Destructors called" << std::endl;
}
    /*end* Constructor and Destructor */

    /* getters */
std::string WrongAnimal::getType( void ) const
{
    return (this->type);
}
    /* end  getters*/

 /* setters */
void WrongAnimal::setType(std::string type)
{
     this->type = type;
}
    /* end setters */

    /* end operators */
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
    this->type = obj.type;
    return (*this);
}
    /* end operators */

void WrongAnimal::makeSound(void) const
{
    //std::cout << "\033[1;31mbold red text\033[0m\n";
    std::cout << "\033[1;31m I'm WrongAnimal\033[0m\n";
}