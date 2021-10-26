#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"


class Cat : public virtual Animal
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
        std::string getType( void );
        /* end  getters*/

/* setters */
    void setType(std::string type);
    /* end setters */
        /*operators*/
    void operator=(const Cat& obj);
             /* end operators */
    
    void makeSound(void);
};


#endif