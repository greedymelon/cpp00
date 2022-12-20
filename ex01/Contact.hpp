#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class	Contact
{
	public:

		void	set_contact(std::string first_n, std::string last_n,
					std::string nickn, std::string phone_n,
					std::string darkest_s);
		void	print_contact_table(int index) const;
		void	print_contact_info(void) const;
		Contact(void);
		~Contact(void);

	private:

		std::string	_first_name; 
		std::string	_last_name; 
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
};

#endif