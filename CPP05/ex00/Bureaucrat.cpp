#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("no name define"), _grade(150)
{
    return ;
}

Bureaucrat::Bureaucrat(const std::string name) : _name(name), _grade(150)
{
    return ;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
    //mettre le grade au max en cas d'exception sinon var vide!?!
    //_grade = 150;
    if (grade > 150)
        throw(GradeTooLowException());
    else if (grade < 1)
        throw(GradeTooHighException());
    this->_grade = grade;
    return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & cpy) : _name(cpy._name), _grade(cpy._grade)
{
    return ;
}

Bureaucrat::~Bureaucrat()
{
    return ;
}

Bureaucrat& Bureaucrat::operator=( Bureaucrat const & bur )
{
    //this->_name = bur._name; //wtf??
    this->_grade = bur._grade;

    return (*this);
}

std::string Bureaucrat::getName() const
{
    return (this->_name);
}

int Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void Bureaucrat::incrementGrade()
{
    if (this->_grade > 1)
        this->_grade --;
    else if (this->_grade == 1)
        throw(GradeTooHighException());
}

void Bureaucrat::decrementGrade()
{
    if (this->_grade < 150)
        this->_grade ++;
    else if (this->_grade == 150)
        throw(GradeTooLowException());
}

std::ostream & operator<<( std::ostream & o, Bureaucrat &bur)
{
    o << bur.getName() << ", bureaucrat grade " << bur.getGrade() << std::endl;
    return o;
}


const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade too high. The highest grade is 1, you cannot go under 1.");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade too low. The lowest grade is 150, you cannot go over 150.");
}
