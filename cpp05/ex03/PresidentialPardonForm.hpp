#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm : public Form {
	private:
		std::string	target;

	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm( std::string const &target );
		PresidentialPardonForm( const PresidentialPardonForm &src );
		~PresidentialPardonForm( void );

		PresidentialPardonForm	&operator = ( const PresidentialPardonForm &src );

		void	execute( const Bureaucraft &executor );
};

#endif
