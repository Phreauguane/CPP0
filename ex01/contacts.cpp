#include <iostream>
#include <string>
#include <sstream>

#include "PhoneDir.hpp"

void	search(PhoneDir &dir)
{
	dir.printContacts();
	std::cout << std::endl << "Contact ID : ";

	std::string input;
	bool valid = true;

	std::cin >> input;
	for (int i = 0; i < int(input.size()); i++)
		valid = valid && isdigit(input[i]);
	int id;
	std::istringstream istr(input);
	istr >> id;

	valid = valid && dir.isIDValid(id);
	if (!valid)
	{
		std::cout << "Invalid ID !" << std::endl;
		return;
	}
	dir.printContact(id);
	std::cout << std::endl;
}

int	main(void)
{
	PhoneDir directory;
	while (true)
	{
		std::string str;

		std::cout << "> ";
		std::cin >> str;

		if (str == "EXIT")
			return (0);
		if (str == "SEARCH")
			search(directory);
		if (str == "ADD")
			directory.addContact();
	}
}