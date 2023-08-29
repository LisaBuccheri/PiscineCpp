#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : AForm("RobotomyRequestForm", 72, 45)
{
    return ;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
    return ;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & s ) : AForm("RobotomyRequestForm", 72, 45), _target(s._target)
{
    return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    return ;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const & s)
{
    this->_target = s._target;
    return (*this);
}

void    RobotomyRequestForm::execution(Bureaucrat const &bc)
{
    std::cout << "Brrrrzzzz....." << std::endl;
    if (rand() % 2)
        std::cout << this->_target << " has been robotized" << std::endl;
    else
        std::cout << "failed to robotized" << std::endl;
    return ;
}

std::ostream & operator<<( std::ostream & o, RobotomyRequestForm &form)
{
    o << "Form: " << form.getName() 
    << ", is signed " << form.getIsSigned() 
    << " is grade sign is " << form.getSignGrade() 
    << " and is execution grade is " << form.getExecGrade() 
    << std::endl;
    return o;
}