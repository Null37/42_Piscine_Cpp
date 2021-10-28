#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
    std::string type;
public:

        /* Constructors and destructors */
    Animal( void );
    Animal(const Animal& obj);
    ~Animal();
        /*end* Constructor and Destructor */


    /* getters */
    virtual std::string getType( void ) const;
        /* end  getters*/

    /* setters */
    void setType(std::string type);
    /* end setters */

        /*operators*/
   Animal& operator=(const Animal& obj);
            /* end operators */

    virtual void makeSound(void) const ;
};





#endif