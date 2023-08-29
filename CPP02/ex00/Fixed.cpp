/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuccher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 20:52:56 by lbuccher          #+#    #+#             */
/*   Updated: 2022/05/09 20:52:57 by lbuccher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"

int const   Fixed::_bits = 8;

Fixed::Fixed( void ) : _n(0)
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed( Fixed const & newN )
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

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;

    return this->_n;
}

void    Fixed::setRawBits( int const raw )
{
    this->_n = raw;
    return ;
}

Fixed & Fixed::operator=( Fixed const & newN )
{
    std::cout << "Copy assignement operator called" << std::endl;

    if (this != &newN)
        this->_n = newN.getRawBits();
    return *this ;
}
