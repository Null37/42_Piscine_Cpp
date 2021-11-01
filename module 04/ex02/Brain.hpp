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
    std::string getTypeID( int index ) const;
        /* end  getters*/

    /* setters */
    void setType(std::string type, int i);
    /* end setters */

        /*operators*/
   void operator=(const Brain& obj);
};


#endif
