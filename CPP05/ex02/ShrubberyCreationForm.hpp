#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm : public AForm
{

    public:
        ShrubberyCreationForm( void );
        ShrubberyCreationForm( std::string target );
        ShrubberyCreationForm( ShrubberyCreationForm const & s );
        virtual ~ShrubberyCreationForm();

        ShrubberyCreationForm &operator=(ShrubberyCreationForm const & s);
    
        virtual void    execution(Bureaucrat const &bc);

    private:
        std::string _target;
};

std::ostream & operator<<( std::ostream & o, ShrubberyCreationForm const & form );

#endif