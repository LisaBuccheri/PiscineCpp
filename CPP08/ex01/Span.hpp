#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <list>
# include <algorithm>

class Span
{
    private:
        unsigned int    _nb;
        std::list<int>  _list;

    public:
        Span();
        Span(unsigned int N);
        Span(Span const & cpy);
        ~Span();

        Span & operator=(Span const & cpy);

        void addNumber(const int nb);
        int  shortestSpan();
        int  longestSpan();

        class NoSpace : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        class NoDistance : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

#endif