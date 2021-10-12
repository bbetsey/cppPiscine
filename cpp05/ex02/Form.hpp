#ifndef FORM_HPP
# define FORM_HPP

class Bureaucraft;

# include <iostream>
# include "Bureaucraft.hpp"

class Form {

	protected:
		std::string const	name;
		bool				sign;
		int					gradeToSign;
		int					gradeToExecute;

		bool				isSigned( void );
		void				checkExecutor( const Bureaucraft &executor );

	public:

		class GradeTooHighException : public std::exception {
			private:
				const char	*msg;
			public:
				GradeTooHighException( void );
				GradeTooHighException( const char *msg );
				virtual const char	*what() const throw();
		};

		class GradeTooLowException : public std::exception {
			private:
				const char	*msg;
			public:
				GradeTooLowException( void );
				GradeTooLowException( const char *msg );
				virtual const char	*what() const throw();
		};

		class FormNotSignedException : public std::exception {
			private:
				const char	*msg;
			public:
				FormNotSignedException( void );
				FormNotSignedException( const char *msg );
				virtual const char	*what() const throw();
		};

		Form( const std::string name, int gradeToSign, int gradeToExecute );
		Form( const Form &src );
		virtual ~Form( void );

		Form	&operator = ( const Form &src );

		std::string const	&getName( void ) const;
		int					getGradeToSign( void ) const;
		int					getGradeToExecute( void ) const;
		void				beSigned( const Bureaucraft &bureaucraft );
		virtual void		execute( const Bureaucraft &executor ) = 0;

};

std::ostream	&operator << ( std::ostream &out, const Form &src );

#endif
