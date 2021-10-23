#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

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
        Fixed(const int nb);
        Fixed(const float nf);
        float toFloat(void) const;
        int toInt( void ) const;
        //Six comparison operators:
        bool operator== (const Fixed& newfixed1);
        bool operator!= (const Fixed& newfixed1);
        bool operator< (const Fixed& newfixed1);
        bool operator> (const Fixed& newfixed1);
        bool operator>=(const Fixed& newfixed1);
        bool operator<=(const Fixed& newfixed1);
       //End six comparison operators


        // Four arithmetic operators
        Fixed operator+ (const Fixed& newfixed1);
        Fixed operator- (const Fixed& newfixed1);
        Fixed operator* (const Fixed& newfixed1);
        Fixed operator/ (const Fixed& newfixed1);
        //End four arithmetic operators

        //pr***-*
        Fixed operator++ (int);
        Fixed operator++ ();
        Fixed operator-- ();
        Fixed operator-- (int);
        //end
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif