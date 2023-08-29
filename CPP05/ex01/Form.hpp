#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>

class Bureaucrat;

class Form
{
    
    public:
        Form( void );
        Form( std::string name);
        Form( std::string name, int signGrade);
        Form( std::string name, int signGrade, int execGrade);
        Form( Form const & cpy );
        ~Form();

        Form& operator=(Form const & cpy);

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

        std::string   getName() const;
        bool          getIsSigned() const;
        int           getSignGrade() const;
        int           getExecGrade() const;
        void          beSigned(Bureaucrat bc);

    
    private:
        const std::string   _name;
        bool                _isSigned;
        const int           _signGrade;
        const int           _execGrade;
};

std::ostream & operator<<( std::ostream & o, Form const & form );

#endif