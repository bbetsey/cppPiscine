#ifndef FORM_HPP
# define FORM_HPP

class Bureaucraft;

# include <iostream>
# include "Bureaucraft.hpp"

class Form {

	private:
		std::string const	name;
		bool				sign;
		int					gradeToSign;
		int					gradeToExecute;

	public:

		class GradeTooHighException : public std::exception {
			private:
				const char	*msg;
			public:
				GradeTooHighException( const char *msg );
				virtual const char	*what() const throw();
		};

		class GradeTooLowException : public std::exception {
			private:
				const char	*msg;
			public:
				GradeTooLowException( const char *msg );
				virtual const char	*what() const throw();
		};

		Form( const std::string name, int gradeToSign, int gradeToExecute );
		Form( const Form &src );
		virtual ~Form( void );

		Form	&operator = ( const Form &src );

		std::string const	&getName( void ) const;
		int					getGradeToSign( void ) const;
		int					getGradeToExecute( void ) const;
		bool				isSigned( void );
		void				beSigned( const Bureaucraft &bureaucraft );

};

std::ostream	&operator << ( std::ostream &out, const Form &src );

#endif
