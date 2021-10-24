#include "Fixed.hpp"


const int Fixed::fractional_bits = 8;

Fixed::Fixed( void )
{
    fixed_point = 0;
}

Fixed::~Fixed( void ){
}

Fixed::Fixed(const Fixed &old)
{
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
    fixed_point = old_fix.fixed_point;
}

Fixed::Fixed(const int nb)
{
    fixed_point = roundf(nb * (float)(1 << fractional_bits));
}

Fixed::Fixed(const float nf)
{
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

bool Fixed::operator==(const Fixed& newfixed1)
{
    return (this->toFloat() == newfixed1.toFloat());
}

bool Fixed::operator!=(const Fixed& newfixed1)
{
    return (this->toFloat() != newfixed1.toFloat());
}

bool Fixed::operator>(const Fixed& newfixed1)
{   
    return (this->toFloat() > newfixed1.toFloat());
}

bool Fixed::operator<(const Fixed& newfixed1)
{
    return (this->toFloat() < newfixed1.toFloat());
}

bool Fixed::operator>=(const Fixed& newfixed1)
{
    return (this->toFloat() >= newfixed1.toFloat());
}

bool Fixed::operator<=(const Fixed& newfixed1)
{
    return (this->toFloat() <= newfixed1.toFloat());
}

Fixed Fixed::operator+ (const Fixed& newfixed1)
{
    return(this->toFloat() + newfixed1.toFloat());
}

Fixed Fixed::operator- (const Fixed& newfixed1)
{
    return(this->toFloat() - newfixed1.toFloat());
}

Fixed Fixed::operator* (const Fixed& newfixed1)
{
    return(this->toFloat() * newfixed1.toFloat());
}

Fixed Fixed::operator/ (const Fixed& newfixed1)
{
    return(this->toFloat() / newfixed1.toFloat());
}

Fixed Fixed::operator++ (int) //Postfix Increment ++
{
    Fixed tmp;
    tmp.fixed_point = fixed_point++;
    return tmp;
}

Fixed Fixed::operator++ () // Prefix ++ Increment
{
    Fixed tmp;
    tmp.fixed_point = ++fixed_point;
    return tmp;
}

Fixed Fixed::operator-- () // --Decrement 
{
    Fixed tmp;
    tmp.fixed_point = --fixed_point;
    return tmp;
}

Fixed Fixed::operator-- (int) // Decrement --
{
    Fixed tmp;
    tmp.fixed_point = fixed_point--;
    return tmp;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a.fixed_point > b.fixed_point)
        return (b);
    else
        return (a);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a.fixed_point < b.fixed_point)
        return (b);
    else
        return (a);
}