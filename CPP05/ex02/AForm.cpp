#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm( void ) : _name("default form"), _isSigned(0), _signGrade(150), _execGrade(150)
{
    return ;
}

AForm::AForm( std::string name ) : _name(name), _isSigned(0), _signGrade(150), _execGrade(150)
{
    return ;
}

AForm::AForm( std::string name, int signGrade ) : _name(name), _isSigned(0), _signGrade(signGrade), _execGrade(150)
{
    if (signGrade > 150)
        throw(AForm::GradeTooLowException());
    else if (signGrade < 1)
        throw(GradeTooHighException());
    return ;
}

AForm::AForm( std::string name, int signGrade, int execGrade ) : _name(name), _isSigned(0), _signGrade(signGrade), _execGrade(execGrade) 
{
    if (signGrade > 150 || execGrade > 150)
        throw(AForm::GradeTooLowException());
    else if (signGrade < 1 || execGrade < 1)
        throw(GradeTooHighException());
    else if(signGrade < execGrade)
        throw(AForm::GradeTooLowException());

    return ;
}

AForm::AForm(AForm const & cpy) : _name(cpy._name), _isSigned(cpy._isSigned), _signGrade(cpy._signGrade), _execGrade(cpy._execGrade)
{
    return ;
}

AForm::~AForm()
{
    return ;
}

AForm& AForm::operator=( AForm const & form )
{
    (void)form;
    return (*this);
}

std::string   AForm::getName() const
{
    return (this->_name);
}

bool    AForm::getIsSigned() const
{
    return (this->_isSigned);
}

int   AForm::getSignGrade() const
{
    return (this->_signGrade);
}
        
int   AForm::getExecGrade() const
{
    return (this->_execGrade);
}

void    AForm::beSigned(Bureaucrat const &bc)
{
    if (this->_signGrade < bc.getGrade())
        throw(GradeTooLowException());
    else if (this->_signGrade >= bc.getGrade())
        this->_isSigned = true;
    return ;
}

void    AForm::execute(Bureaucrat const & executor) const
{
    if (this->_isSigned)
    {
        if (executor.getGrade() <= this->_execGrade)
            this->execution();
        else
            throw(GradeTooLowException());
    }
    else
        throw(FormNotSigned());
    return ;
}

std::ostream & operator<<( std::ostream & o, AForm const & form )
{
    o << "Form: " << form.getName() 
    << ", is signed " << form.getIsSigned() 
    << " is grade sign is " << form.getSignGrade() 
    << " and is execution grade is " << form.getExecGrade() 
    << std::endl;
    return o;
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return ("Grade too high. Grade can't be under 1 which is the highest grade.\n");
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return ("Grade too low. Grade can't be over 150 which is the lowest grade.\n");
}

const char* AForm::FormNotSigned::what() const throw()
{
    return ("You can't execute this form, it hasn't been signed yet!\n");
}
