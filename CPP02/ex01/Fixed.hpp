#ifndef	FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int                 _n;
        int const static    _bits;

    public:
        Fixed( void );
        Fixed( const int );
        Fixed( const float );
        Fixed( Fixed const & src );
        ~Fixed( void );

        Fixed & operator=( Fixed const & newN);

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );

        float   toFloat( void ) const;
        int     toInt( void ) const;
};

std::ostream &  operator<<( std::ostream & o, Fixed const & n);

#endif