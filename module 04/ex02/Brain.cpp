#include "Brain.hpp"


   /* Constructors and destructors */
Brain::Brain( void )
{
    std::cout << "brain Default Constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = "my idea is controll the zoo";
    }
}

Brain::Brain(const Brain& obj)
{
    std::cout << "brain copy Constructor called" << std::endl;
    *this = obj;
}

Brain::~Brain()
{
    std::cout << "brain Default Destructor called" << std::endl;
}
     /*end* Constructor and Destructor */

 /* getters */
std::string Brain::getTypeID( int index ) const
{
    return this->ideas[index];

}
     /* end  getters*/
 /* setters */
void Brain::setType(std::string type, int i)
{
    this->ideas[i] = type;
}
 /* end setters */
     /*operators*/
void Brain::operator=(const Brain& obj)
{
     for (size_t i = 0; i < 100; i++)
     {
         this->ideas[i] = obj.ideas[i];
     }  
}