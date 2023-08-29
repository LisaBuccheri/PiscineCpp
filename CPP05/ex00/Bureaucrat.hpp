#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{

    public:
        Bureaucrat();
        Bureaucrat( const std::string name );
        Bureaucrat( const std::string name, int grade );
        Bureaucrat( Bureaucrat const & cpy);
        ~Bureaucrat();

        Bureaucrat& operator=( Bureaucrat const & bur );

        std::string   getName() const;
        int           getGrade() const;

        void    incrementGrade();
        void    decrementGrade();

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

    private:
        const std::string   _name;
        int                 _grade; 
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & bur);

#endif