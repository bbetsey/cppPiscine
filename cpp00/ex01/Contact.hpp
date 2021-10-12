#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	number;
		std::string	secret;

		void		getLine(std::string head, std::string &str);
		void		setFirstName();
		void		setLastName();
		void		setNickname();
		void		setNumber();
		void		setSecret();

	public:
		void		print();
		void		setContact();
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickname();
		std::string	getNumber();
		std::string	getSecret();
};

#endif
