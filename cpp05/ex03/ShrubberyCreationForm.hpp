#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include "Bureaucraft.hpp"
# include "Form.hpp"

class ShrubberyCreationForm : public Form {
	private:
		std::string	target;

	public:
		ShrubberyCreationForm( void );
		ShrubberyCreationForm( const std::string target );
		ShrubberyCreationForm( const ShrubberyCreationForm &src );
		virtual ~ShrubberyCreationForm( void );

		ShrubberyCreationForm	&operator = ( const ShrubberyCreationForm &src );

		void	execute( const Bureaucraft &executor );
};

#endif
