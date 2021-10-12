#include "Contact.hpp"

void	Contact::print()
{
	std::cout << "------------------------------" << std::endl;
	std::cout << "First Name:\t" << this->first_name <<
	"\nLast Name:\t" << this->last_name <<
	"\nNickname:\t" << this->nickname <<
	"\nNumber:\t\t" << this->number <<
	"\nSecret:\t\t" << this->secret << std::endl;
	std::cout << "------------------------------" << std::endl;
}

void	Contact::getLine(std::string head, std::string &str)
{
	std::cout << head;
	getline(std::cin, str);
}

void	Contact::setFirstName()
{
	Contact::getLine("Enter a first name: ", this->first_name);
}

void	Contact::setLastName()
{
	Contact::getLine("Enter a last name: ", this->last_name);
}

void	Contact::setNickname()
{
	Contact::getLine("Enter a nickname: ", this->nickname);
}

void	Contact::setNumber()
{
	Contact::getLine("Enter a number: ", this->number);
}

void	Contact::setSecret()
{
	Contact::getLine("Enter a secret: ", this->secret);
}

void	Contact::setContact()
{
	// std::string	str;
	
	// getline(std::cin, str);
	setFirstName();
	setLastName();
	setNickname();
	setNumber();
	setSecret();
}

std::string	Contact::getFirstName()
{
	return (this->first_name);
}

std::string Contact::getLastName()
{
	return (this->last_name);
}

std::string Contact::getNickname()
{
	return (this->nickname);
}

std::string Contact::getNumber()
{
	return (this->number);
}

std::string Contact::getSecret()
{
	return (this->secret);
}
