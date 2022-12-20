#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP
# include "Contact.hpp"


class	PhoneBook{

	public:

		void	set_contact(std::string first_name, std::string last_name,
					std::string nickname, std::string phone_number,
					std::string darkest_secred);
		void	show_contact(void) const;
		void	show_contact(int index) const;

		PhoneBook(void);
		~PhoneBook(void);

	private:

		Contact	_contacts[8];
		int		_n_contact;
};

#endif