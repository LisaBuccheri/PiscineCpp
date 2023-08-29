#ifndef AFORM_HPP
# define AFORM_HPP

# include <string>
# include <iostream>

class Bureaucrat;

class AForm
{
    
    public:
        AForm( void );
        AForm( std::string name);
        AForm( std::string name, int signGrade);
        AForm( std::string name, int signGrade, int execGrade);
        AForm( AForm const & cpy );
        virtual ~AForm();

        AForm& operator=(AForm const & cpy);

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        class FormNotSigned : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        std::string     getName() const;
        bool            getIsSigned() const;
        int             getSignGrade() const;
        int             getExecGrade() const;
        void            beSigned(Bureaucrat const &bc);
        void            execute(Bureaucrat const & executor) const;
        virtual void    execution(void) const = 0;

    private:
        const std::string   _name;
        bool                _isSigned;
        const int           _signGrade;
        const int           _execGrade;
};

std::ostream & operator<<( std::ostream & o, AForm const & form );

#endif