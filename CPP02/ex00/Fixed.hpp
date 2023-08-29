/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuccher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 20:53:02 by lbuccher          #+#    #+#             */
/*   Updated: 2022/05/09 20:53:03 by lbuccher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int                 _n;
        int const static    _bits;

    public:
        Fixed( void );
        Fixed( Fixed const & src );
        ~Fixed( void );

        Fixed & operator=( Fixed const & newN);

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
};

#endif
