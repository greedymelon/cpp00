#include "Contact.hpp"
#include <iostream>
#include <cctype>
#include <iomanip>

void	Contact::set_contact( std::string first_n, std::string last_n,
	std::string nickn, std::string phone_n, std::string darkest_s )
{
	this->_first_name = first_n;
	this->_last_name = last_n;
	this->_nickname = nickn;
	this->_phone_number = phone_n;
	this->_darkest_secret = darkest_s;
}

static void	st_print_format( std::string to_print )
{
	if (to_print.length() > 10 )
		std::cout << to_print.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << to_print;
		std::cout << "|" ;
}

void	Contact::print_contact_table( int index ) const
{
	std::cout << "|" << std::setw(10) << index << "|";
	st_print_format(this->_first_name);
	st_print_format(this->_last_name);
	st_print_format(this->_nickname);
	st_print_format(this->_phone_number);

	std::cout << std::endl;
}

void	Contact::print_contact_info( void ) const
{
	std::cout << "First Name: " << this->_first_name << std::endl;
	std::cout << "Last Name: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone Number: " << this->_phone_number << std::endl;
	std::cout << "Darkest Secret: " << this->_darkest_secret << std::endl;
}

Contact::Contact( void ){}

Contact::~Contact( void ){}