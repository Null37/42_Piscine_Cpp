#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>


class Fixed
{
    private:
        int fixed_point; 
        static const int  fractional_bits;//8
    public:
        Fixed( void );
        ~Fixed( void );
        Fixed(const Fixed &old);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        void operator=(const Fixed& old_fix);
        Fixed(const int newint);
        
};



#endif