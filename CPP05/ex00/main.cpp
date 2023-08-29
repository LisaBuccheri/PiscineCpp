#include "Bureaucrat.hpp"

int main()
{
    std::cout << "\n----------Grade too low----------\n" << std::endl;
    try
    {
        Bureaucrat b("Jeff", 215);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }

    std::cout << "\n---------Grade too high----------\n" << std::endl;
    try
    {
        Bureaucrat c("Jack", -1);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }

    std::cout << "\n---------Decrese Grade----------\n" << std::endl;
    try
    {
        Bureaucrat d("Jeff", 150);
        d.decrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }

    std::cout << "\n---------Increse Grade----------\n" << std::endl;
    try
    {
        Bureaucrat j("Jack", 1);
        j.incrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    
}