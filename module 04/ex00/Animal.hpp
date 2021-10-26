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
    std::string getType( void );
        /* end  getters*/

    /* setters */
    void setType(std::string type);
    /* end setters */

        /*operators*/
    void operator=(const Animal& obj);
            /* end operators */

    void makeSound(void);
};





#endif