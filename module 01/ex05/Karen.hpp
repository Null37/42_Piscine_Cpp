#ifndef KAREN_HPP
#define KAREN_HPP
#include <iostream>


class Karen
{
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
public:
    typedef  void (Karen::*ll)(); 
    ll x;
    void complain( std::string level );
};



#endif