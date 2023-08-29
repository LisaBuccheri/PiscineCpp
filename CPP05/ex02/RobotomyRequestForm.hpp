#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    public:
        
        RobotomyRequestForm();
        RobotomyRequestForm( std::string target );
        RobotomyRequestForm( RobotomyRequestForm const & s );
        ~RobotomyRequestForm();

        RobotomyRequestForm &operator=(RobotomyRequestForm const & s);

        virtual void execution(Bureaucrat const &bc);

    private:
        std::string _target;
};

RobotomyRequestForm::RobotomyRequestForm(/* args */)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}


#endif