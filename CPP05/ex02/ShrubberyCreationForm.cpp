#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : AForm("ShrubberyCreationForm", 145, 137), _target("no target")
{
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & s ) : AForm("ShrubberyCreationForm", 145, 137), _target(s._target)
{
    return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    return ;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const & s)
{
    this->_target = s._target;
    return (*this);
}

void    ShrubberyCreationForm::execution(Bureaucrat const &bc)
{
    std::ofstream ofs(this->_target + "_shrubbery");
    ofs << "          &&& &&  & &&" << std::endl; //https://ascii.co.uk/art/tree
    ofs << "      && &\/&\|& ()|/ @, &&" << std::endl;
    ofs << "      &\/(/&/&||/& /_/)_&/_&" << std::endl;
    ofs << "   &() &\/&|()|/&\/ '%' & ()" << std::endl;
    ofs << "  &_\_&&_\ |& |&&/&__%_/_& &&" << std::endl;
    ofs << "&&   && & &| &| /& & % ()& /&&" << std::endl;
    ofs << " ()&_---()&\&\|&&-&&--%---()~" << std::endl;
    ofs << "     &&     \|||" << std::endl;
    ofs << "             |||" << std::endl;
    ofs << "             |||" << std::endl;
    ofs << "             |||" << std::endl;
    ofs << "       , -=-~  .-^- _" << std::endl;
    return ;
}

std::ostream & operator<<( std::ostream & o, ShrubberyCreationForm const &form)
{
    o << "Form: " << form.getName() 
    << ", is signed " << form.getIsSigned() 
    << " is grade sign is " << form.getSignGrade() 
    << " and is execution grade is " << form.getExecGrade() 
    << std::endl;
    return o;
}
