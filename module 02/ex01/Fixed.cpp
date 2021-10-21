#include "Fixed.hpp"


#include "Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed( void )
{
    std::cout << "Default constructor called" << "\n";
    fixed_point = 0;
}

Fixed::~Fixed( void )
{
    std::cout << "Destructor called" << "\n";
}

Fixed::Fixed(const Fixed &old)
{
    std::cout << "Copy constructor called" << "\n";
    this->fixed_point = old.fixed_point;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << "\n";
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

Fixed::Fixed(const int nb)
{
    std::cout << "Int constructor called" << "\n";
    fixed_point = roundf(nb * (float)(1 << fractional_bits));
}

Fixed::Fixed(const float nf)
{
    std::cout << "Float constructor called" << "\n";
    fixed_point = roundf(nf  * (float)(1 << fractional_bits)); // shift left use fractinal bits or power(2, 8)
}

float Fixed::toFloat( void ) const
{
    return (this->fixed_point / (float)(1 << fractional_bits)); // right shift 
}

int Fixed::toInt( void ) const
{
    return (this->fixed_point / (float)(1 << fractional_bits)); // right shift ex:10.0
}
 std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
   os << obj.toFloat();
    return os;
}