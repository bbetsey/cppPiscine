#ifndef BUREAUCRAFT_HPP
# define BUREAUCRAFT_HPP

# include <iostream>

class Bureaucraft {

	private:
		std::string	const	name;
		int					grade;

	public:

		class GradeTooHighException : public std::exception {
			private:
				int	grade;
			public:
				GradeTooHighException( int grade );
				virtual const char	*what() const throw();
		};

		class GradeTooLowException : public std::exception {
			private:
				int	grade;
			public:
				GradeTooLowException( int grade );
				virtual const char	*what() const throw();
		};

		Bureaucraft( void );
		Bureaucraft( std::string name, int grade );
		Bureaucraft( const Bureaucraft &src );
		virtual ~Bureaucraft( void );

		Bureaucraft			&operator = ( const Bureaucraft &src );

		std::string const	&getName( void ) const;
		int					getGrade( void ) const;
		void				gradeUp( void );
		void				gradeDown( void );

};

std::ostream	&operator << ( std::ostream &out, Bureaucraft const &bureaucraft );

#endif
