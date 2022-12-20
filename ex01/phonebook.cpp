#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
	this->_n_contact = 0;
}

void	PhoneBook::set_contact( std::string first_name, std::string last_name,
	std::string nickname, std::string phone_number, std::string darkest_secred )
{
	for (int num = 6; num >= 0; num--)
		this->_contacts[num + 1] = this->_contacts[num];

	this->_contacts[0].set_contact(first_name, last_name, nickname,
		phone_number, darkest_secred);
	
	if (this->_n_contact < 8)
		this->_n_contact++;
}

void	PhoneBook::show_contact( void ) const
{
	if (!this->_n_contact)
		std::cout << "The Phonebook is empty" << std::endl;
	else
		for (int i = 0; i < this->_n_contact; i++)
			this->_contacts[i].print_contact_table(i + 1);
}

void	PhoneBook::show_contact( int index ) const
{
	if (index < 1 || index > 8 || index > this->_n_contact)
		std::cout << "Index out of range" << std::endl;
	else
		this->_contacts[index - 1].print_contact_info();
}

PhoneBook::~PhoneBook( void ){}