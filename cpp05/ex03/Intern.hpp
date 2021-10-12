#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {
	private:
		std::string	types[3];
		typedef		Form *(Intern::*method)( std::string const &target );
		method		methods[3];

		int			getTypeIndex( std::string const &type );

		Form		*newShrubberyCreationForm( std::string const &target );
		Form		*newRobotomyRequestForm( std::string const &target );
		Form		*newPresidentialPardonForm( std::string const &target );

	public:

		class InternInvalidFormException : public std::exception {
			public:
				const char *what() const throw();
		};

		Intern( void );
		Intern( const Intern &src );
		~Intern( void );

		Intern	&operator = ( const Intern & );

		Form	*makeForm( std::string const &type, std::string const &target );
};

#endif
