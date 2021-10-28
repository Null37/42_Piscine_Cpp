#include "Dog.hpp"

        /* Constructors and destructors */
Dog::Dog( void )
{
    std::cout << "DOG Default Constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog& obj)
{
    std::cout << "DOG copy Constructor called" << std::endl;
   this->type = obj.type;
}

Dog::~Dog()
{
    std::cout << "DOG Default Destructor called" << std::endl;

}
        /*end* Constructor and Destructor */

    /* getters */
std::string Dog::getType( void ) const
{
    return (this->type);
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
    return (*this);
}
    /* end operators */

void Dog::makeSound(void) const
{
    // \033[1;I'm Animal\033[0m\n
    std::cout << "\033[1;32m hah huh hah huh\033[0m" << std::endl;
}