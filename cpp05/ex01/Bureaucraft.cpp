#include "Bureaucraft.hpp"


//MARK: - Class Constructor

Bureaucraft::Bureaucraft( void ) : name( "default" ), grade( 1 ) {}

Bureaucraft::Bureaucraft( std::string name, int grade ) : name( name ), grade( grade ) {
	if (grade > 150)
		throw Bureaucraft::GradeTooLowException( grade );
	else if (grade < 1)
		throw Bureaucraft::GradeTooHighException( grade );
}


//MARK: - Class Distructor

Bureaucraft::~Bureaucraft( void ) {}


//MARK: - Class Copy Constructor

Bureaucraft::Bureaucraft( const Bureaucraft &src ) : name( src.name ), grade( src.grade ) {}


//MARK: - Class Assignation Overload

Bureaucraft	&Bureaucraft::operator = ( const Bureaucraft &src ) {
	if (this != &src) {
		this->grade = src.grade;
	}
	return *this;
}

//MARK: - Class GradeTooHighException

Bureaucraft::GradeTooHighException::GradeTooHighException( int grade ) : std::exception(), grade( grade ) {}

const char	*Bureaucraft::GradeTooHighException::what() const throw() {
	std::string text = "Grade is too high [1;150] : " + std::to_string( grade );
	const char	*msg = text.c_str();
	return msg;
}


//MARK: - Class GradeTooLowException

Bureaucraft::GradeTooLowException::GradeTooLowException( int grade) : std::exception(), grade( grade ) {}

const char	*Bureaucraft::GradeTooLowException::what() const throw() {
	std::string text = "Grade is too low [1;150] : " + std::to_string( grade );
	const char	*msg = text.c_str();
	return msg;
}


//MARK: - Class Methods

std::string	const	&Bureaucraft::getName( void ) const {
	return name;
}

int	Bureaucraft::getGrade( void ) const {
	return grade;
}

void	Bureaucraft::gradeUp( void ) {
	grade--;
	if (grade < 1)
		throw Bureaucraft::GradeTooHighException( grade );
}

void	Bureaucraft::gradeDown( void ) {
	grade++;
	if (grade > 150)
		throw Bureaucraft::GradeTooLowException( grade );
}

void	Bureaucraft::signForm( Form &form ) {
	try {
		form.beSigned( *this );
		std::cout << "The Form[" + form.getName() + "] signed by " + name << std::endl;
	} catch( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}
}


//MARK: - Ostream Overload

std::ostream	&operator << ( std::ostream &out, Bureaucraft const &bureaucraft ) {
	out << "Name:\t" << bureaucraft.getName() << "\nGrade:\t" << bureaucraft.getGrade();
	return out;
}
