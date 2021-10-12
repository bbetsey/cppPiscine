#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <stdlib.h>
# include "Form.hpp"

class RobotomyRequestForm : public Form {
	private:
		std::string	target;

	public:
		RobotomyRequestForm( void );
		RobotomyRequestForm( std::string const &target );
		RobotomyRequestForm( const RobotomyRequestForm &src );
		~RobotomyRequestForm( void );

		RobotomyRequestForm	&operator = ( const RobotomyRequestForm &src );

		void	execute( const Bureaucraft &executor );
};

#endif
