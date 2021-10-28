#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
    std::string type;
public:

        /* Constructors and destructors */
    WrongAnimal( void );
    WrongAnimal(const WrongAnimal& obj);
    ~WrongAnimal();
        /*end* Constructor and Destructor */


    /* getters */
    std::string getType( void ) const;
        /* end  getters*/


    /* setters */
    void setType(std::string type);
    /* end setters */

        /*operators*/
   WrongAnimal& operator=(const WrongAnimal& obj);
            /* end operators */

    void makeSound(void) const ;
};





#endif