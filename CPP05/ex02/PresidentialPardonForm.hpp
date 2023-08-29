#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{   
    public:

        PresidentialPardonForm( void );
        PresidentialPardonForm( std::string target );
        PresidentialPardonForm( PresidentialPardonForm const & s );
        ~PresidentialPardonForm();
    
        PresidentialPardonForm &operator=(PresidentialPardonForm const & s);

        virtual void execution(Bureaucrat const &bc);

    private:

        std::string _target;    
};

std::ostream & operator<<( std::ostream & o, PresidentialPardonForm const & form );


#endif