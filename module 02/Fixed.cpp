#include "Fixed.hpp"

const int Fixed::fractional_bits= 8;

Fixed::Fixed( void )
{
    std::cout << "Default constructor called" << "\n";
    fixed_point = 0;
}

Fixed::~Fixed( void )
{
    ;
}

Fixed::Fixed(const Fixed &old)
{
    std::cout << "Copy constructor called" << "\n";
    this->fixed_point = old.fixed_point;
}

int Fixed::getRawBits( void ) const
{
    return (fixed_point);
}

void Fixed::setRawBits( int const raw )
{
    fixed_point = raw;
}

void Fixed::operator=(const Fixed& old_fix)
{
    std::cout << "Assignation operator called" << "\n";
    fixed_point = old_fix.fixed_point;
}
