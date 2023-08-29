#include "Fixed.hpp"

int const   Fixed::_bits = 8;

Fixed::Fixed( void ) : _n(0)
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed( const int nb)
{
    std::cout << "Int constructor called" << std::endl;
    this->_n = nb << (this->_bits);
    return ;
}

Fixed::Fixed( const float nb)
{
    std::cout << "Float constructor called" << std::endl;
    this->_n = roundf(nb * (1 << this->_bits));
    return ;
}

Fixed::Fixed( Fixed const &newN )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = newN;

    return ;
}

Fixed::~Fixed( void )
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

float   Fixed::toFloat( void ) const
{
    return ((float)(this->_n) / (1 << this->_bits));
}

int Fixed::toInt( void ) const
{
    return (this->_n >> this->_bits);
}

int Fixed::getRawBits( void ) const
{
    return this->_n;
}

void    Fixed::setRawBits( int const raw )
{
    this->_n = raw;
    return ;
}

Fixed& Fixed::operator=( Fixed const &newN )
{
    std::cout << "Copy assignement operator called" << std::endl;

    if (this != &newN)
        this->_n = newN._n;
    return *this ;
}

std::ostream &  operator<<( std::ostream & o, Fixed const & n)
{
    o << n.toFloat();

    return o;
}