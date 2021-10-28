#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"


class WrongCat : public  WrongAnimal
{
private:
    /* data */
public:
            /* Constructors and destructors */
    WrongCat( void );
    WrongCat(const WrongCat& obj);
    ~WrongCat();
            /*end* Constructor and Destructor */

    /* getters */
        std::string getType( void ) const;
        /* end  getters*/

/* setters */
    void setType(std::string type);
    /* end setters */
        /*operators*/
    WrongCat& operator=(const WrongCat& obj);
             /* end operators */
    
    void makeSound(void) const;
};


#endif