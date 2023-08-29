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

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );

        float   toFloat( void ) const;
        int     toInt( void ) const;

        static Fixed & min( Fixed &n, Fixed &m);
        static Fixed & max( Fixed &n, Fixed &m);

        static const Fixed & min( Fixed const &n, Fixed const &m);
        static const Fixed & max( Fixed const &n, Fixed const &m);

        Fixed & operator=( Fixed const &n);

        Fixed operator+( Fixed const &n) const;
        Fixed operator-( Fixed const &n) const;
        Fixed operator*( Fixed const &n) const;
        Fixed operator/( Fixed const &n) const;

        Fixed & operator++( void ); // prefix 
        Fixed & operator--( void ); // prefix 
        Fixed operator++( int ); // postfix
        Fixed operator--( int ); // postfix
        
        bool operator>( Fixed const &n);
        bool operator<( Fixed const &n);
        bool operator>=( Fixed const &n);
        bool operator<=( Fixed const &n);
        bool operator==( Fixed const &n);
        bool operator!=( Fixed const &n);

};

std::ostream &  operator<<( std::ostream & o, Fixed const & n);

#endif