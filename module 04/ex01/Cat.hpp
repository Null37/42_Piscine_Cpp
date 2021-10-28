#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"


class Cat : public  Animal
{
private:
    /* data */
public:
            /* Constructors and destructors */
    Cat( void );
    Cat(const Cat& obj);
    ~Cat();
            /*end* Constructor and Destructor */

    /* getters */
        std::string getType( void ) const;
        /* end  getters*/

/* setters */
    void setType(std::string type);
    /* end setters */
        /*operators*/
    Cat& operator=(const Cat& obj);
             /* end operators */
    
    void makeSound(void) const;
};


#endif