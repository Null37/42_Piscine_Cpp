#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"



class Dog : public  Animal
{
private:
    /* data */
public:
        /* Constructors and destructors */
    Dog( void );
    Dog(const Dog& obj);
    ~Dog();
        /*end* Constructor and Destructor */

    /* getters */
        std::string getType( void ) const;
        /* end  getters*/

    /* setters */
    void setType(std::string type);
    /* end setters */

        /*operators*/
    Dog& operator=(const Dog& obj);
            /* end operators */
    
    void makeSound(void) const ;
};


#endif