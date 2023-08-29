#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : AForm("PresidentialPardonForm", 25, 5)
{
    return ;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
    return ;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & s ) : AForm("PresidentialPardonForm", 25, 5), _target(s._target)
{
    return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    return ;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const & s)
{
    this->_target = s._target;
    return (*this);
}

void    PresidentialPardonForm::execution(Bureaucrat const &bc)
{
    std::cout << this->_target << " has been forgiven by Zaphod Beeblebrox" << std::endl;
   
    return ;
}

std::ostream & operator<<( std::ostream & o, PresidentialPardonForm &form)
{
    o << "Form: " << form.getName() 
    << ", is signed " << form.getIsSigned() 
    << " is grade sign is " << form.getSignGrade() 
    << " and is execution grade is " << form.getExecGrade() 
    << std::endl;
    return o;
}