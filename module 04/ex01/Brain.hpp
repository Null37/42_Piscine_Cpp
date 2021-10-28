#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
private:
    std::string ideas[100];
public:
        /* Constructors and destructors */
    Brain( void );
    Brain(const Brain& obj);
    ~Brain();
        /*end* Constructor and Destructor */


    /* getters */
    std::string getType( void ) const;
        /* end  getters*/

    /* setters */
    void setType(std::string type);
    /* end setters */

        /*operators*/
   Brain& operator=(const Brain& obj);
};


#endif
