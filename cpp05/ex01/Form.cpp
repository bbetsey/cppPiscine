#include "Form.hpp"


//MARK: - Class Constructor

Form::Form( const std::string name, int gradeToSign, int gradeToExecute ) : name( name ),
																			gradeToSign( gradeToSign ),
																			gradeToExecute( gradeToExecute ) {}


//MARK: - Class Copy Constructor

Form::Form( const Form &src ) : name(src.name),
								gradeToSign( src.gradeToSign ),
								gradeToExecute( src.gradeToExecute ) {}


//MARK: - Class Distructor

Form::~Form( void ) {}


//MARK: - Class Assignation Overload

Form	&Form::operator = ( const Form &src ) {
	if (this != &src) {
		this->gradeToSign = src.gradeToSign;
		this->gradeToExecute = src.gradeToExecute;
	}
	return *this;
}


//MARK: - Class GradeTooHighException

Form::GradeTooHighException::GradeTooHighException( const char *msg ) : std::exception(), msg( msg ) {}

const char	*Form::GradeTooHighException::what() const throw() {
	return msg;
}


//MARK: - Class GradeTooLowException

Form::GradeTooLowException::GradeTooLowException( const char *msg ) : std::exception(), msg( msg ) {}

const char	*Form::GradeTooLowException::what() const throw() {
	return msg;
}


//MARK: - Class Methods

std::string const	&Form::getName( void ) const {
	return name;
}

int		Form::getGradeToSign( void ) const {
	return gradeToSign;
}

int		Form::getGradeToExecute( void ) const {
	return gradeToExecute;
}

bool	Form::isSigned( void ) {
	return sign;
}

void	Form::beSigned( const Bureaucraft &bureaucraft ) {
	if (gradeToSign < bureaucraft.getGrade()) {
		std::string msg = "Error: Bureaucraft[" + bureaucraft.getName() + "] can't sign this Form[" + name + "] ";
		msg += "because Form's grade is too high";
		throw GradeTooLowException( msg.c_str() );
	}
	sign = true;
}


//MARK: - Ostream Overload

std::ostream	&operator << ( std::ostream &out, const Form &src ) {
	out << "State[" + src.getName() + "]: gradeToSign[" + std::to_string(src.getGradeToSign());
	out << "], gradeToExecute[" + std::to_string(src.getGradeToExecute()) + "]";
	return out;
}
