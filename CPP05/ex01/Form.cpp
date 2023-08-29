#include "Form.hpp"
#include "Bureaucrat.hpp"


Form::Form( void ) : _name("default form"), _isSigned(0), _signGrade(150), _execGrade(150)
{
    return ;
}

Form::Form( std::string name ) : _name(name), _isSigned(0), _signGrade(150), _execGrade(150)
{
    return ;
}

Form::Form( std::string name, int signGrade ) : _name(name), _isSigned(0), _signGrade(signGrade), _execGrade(150)
{
    if (signGrade > 150)
        throw(Form::GradeTooLowException());
    else if (signGrade < 1)
        throw(GradeTooHighException());
    return ;
}

Form::Form( std::string name, int signGrade, int execGrade ) : _name(name), _isSigned(0), _signGrade(signGrade), _execGrade(execGrade) 
{
    if (signGrade > 150 || execGrade > 150)
        throw(Form::GradeTooLowException());
    else if (signGrade < 1 || execGrade < 1)
        throw(GradeTooHighException());
    else if(signGrade < execGrade)
        throw(Form::GradeTooLowException());

    return ;
}

Form::Form(Form const & cpy) : _name(cpy._name), _isSigned(cpy._isSigned), _signGrade(cpy._signGrade), _execGrade(cpy._execGrade)
{
    return ;
}

Form::~Form()
{
    return ;
}

Form& Form::operator=( Form const & form )
{
    (void)form;
    return (*this);
}

std::string   Form::getName() const
{
    return (this->_name);
}

bool    Form::getIsSigned() const
{
    return (this->_isSigned);
}

int   Form::getSignGrade() const
{
    return (this->_signGrade);
}
        
int   Form::getExecGrade() const
{
    return (this->_execGrade);
}

void    Form::beSigned(Bureaucrat bc)
{
    if (this->_signGrade < bc.getGrade())
        throw(GradeTooLowException());
    else if (this->_signGrade >= bc.getGrade())
        this->_isSigned = true;
    return ;
}

std::ostream & operator<<( std::ostream & o, Form const & form )
{
    o << "Form: " << form.getName() 
    << ", is signed " << form.getIsSigned() 
    << " is grade sign is " << form.getSignGrade() 
    << " and is execution grade is " << form.getExecGrade() 
    << std::endl;
    return o;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade too high. Grade can't be under 1 which is the highest grade.\n");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade too low. Grade can't be over 150 which is the lowest grade.\n");
}
