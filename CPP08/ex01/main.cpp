#include "Span.hpp"

int main()
{
    Span sp(1);
    try
    {
        sp.addNumber(3);
        sp.shortestSpan();
        sp.longestSpan();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }

    Span sp2(3);
    try
    {
        sp2.addNumber(12);
        sp2.addNumber(7);
        sp2.addNumber(17);
        std::cout << "longest span: " << sp2.longestSpan() << std::endl;
        std::cout << "shortest span: " << sp2.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }

    Span sp3 = Span(5);
    try
    {
        sp3.addNumber(6);
        sp3.addNumber(3);
        sp3.addNumber(17);
        sp3.addNumber(9);
        sp3.addNumber(11);
         std::cout << "longest span: " << sp3.longestSpan() << std::endl;
        std::cout << "shortest span: " << sp3.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}