#include "PhoneBook.hpp"
#include <iostream>


static void	st_add_contact(PhoneBook *phonebook)
{
	std::string	first_name; 
	std::string	last_name; 
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	std::cout << "First Name: ";
	std::getline(std::cin, first_name);
	std::cout << "Last Name: " ;
	std::getline(std::cin, last_name);
	std::cout << "Nickname: " ;
	std::getline(std::cin, nickname);
	std::cout << "Phone Number: " ;
	std::getline(std::cin, phone_number);
	std::cout << "Darkest Secret: " ;
	std::getline(std::cin, darkest_secret);
	
	if (std::cin.fail())
	{
		std::cout << std::endl << "cntl-D exit" << std::endl;
		return ;
	}
	if (!first_name.length() || !last_name.length() || !nickname.length()
			|| !phone_number.length() || !darkest_secret.length())
	{
		std::cout << "ERROR no field can be empty" << std::endl;
		return ;
	}
	phonebook->set_contact(first_name, last_name, nickname, phone_number, darkest_secret);

}
static int st_is_digit(std::string index)
{
	for(size_t i = 0; i < index.size(); i++)
		if(!isdigit(index[i]))
			return (0);
	return (1);
}

static void st_search_contact(PhoneBook *phonebook)
{
	std::string	input;
	int			index;


	phonebook->show_contact();
	std::cout << "Type the index of the contact:" << std::endl;
	std::getline(std::cin, input);

	if (!st_is_digit(input))
		std::cout << "input not a number" << std::endl;
	else
	{
		try
		{
			index = stoi(input);
			phonebook->show_contact(index);
		}
		catch(const std::out_of_range& e)
		{
			std::cout << "Index out of range"  << std::endl;
		}
		catch(const std::invalid_argument& e)
		{
			std::cout << "cntl-D exit" << std::endl;
		}
	}
}

int main (void)
{
	PhoneBook	phonebook;
	std::string	user_input;

	while (!std::cin.fail())
	{
		std::cout << "What would you like to do? ADD SEARCH or EXIT";
		std::cout << std::endl;
		std::getline(std::cin, user_input);

		if (!user_input.compare("ADD"))
			st_add_contact(&phonebook);
		else if (!user_input.compare("SEARCH"))
			st_search_contact(&phonebook);
		else if (!user_input.compare("EXIT"))
			break ;
		else if (std::cin.fail())
			std::cout << "cntl-D exit" << std::endl;
		else
			std::cout << "Wrong input" << std::endl;

		user_input.clear();
	}
}