#include "Contact.hpp"

#include <iostream>

#define WIDTH(x) std::cout.width(x)

Contact::Contact()
{

}

Contact::~Contact()
{

}

Contact::Contact(const Contact &contact)
{
	this->first_name = contact.first_name;
	this->last_name = contact.last_name;
	this->nickname = contact.nickname;
	this->phone_number = contact.phone_number;
	this->darkest_secret = contact.darkest_secret;
}

void	Contact::getInfoFromUser()
{
	first_name = last_name = nickname = phone_number = darkest_secret = "";

	std::cout << "First Name     : ";
	std::cin >> this->first_name;
	std::cout << "Last Name      : ";
	std::cin >> this->last_name;
	std::cout << "Nickame        : ";
	std::cin >> this->nickname;
	std::cout << "Phone Number   : ";
	std::cin >> this->phone_number;
	std::cout << "Darkest Secret : ";
	std::cin >> this->darkest_secret;

	std::cout << "\nContact \"" << this->first_name << "\" added successfully\n";
}

static std::string trunc(std::string str, int size)
{
	if (int(str.length()) > size)
	    return str.substr(0, size - 1) + ".";
	else if (int(str.length()) < size)
	{
		std::string spaces= "";
		int s = int(str.length());
		for (int i = s; i < size; i++)
			spaces += " ";
		return spaces + str;
	}
	return str;
}

void	Contact::printContact(int id)
{
	std::cout << "║";
	WIDTH(10);
	std::cout << id << "║";
	std::cout << trunc(first_name, 10) << "║";
	std::cout << trunc(last_name, 10) << "║";
	std::cout << trunc(nickname, 10) << "║";
}

void	Contact::printContactFull()
{
	std::cout << "╔═══════════════════════════════════════╗" << std::endl;
	std::cout << "║     First name : ";WIDTH(20);std::cout << first_name     ;std::cout << " ║" << std::endl;
	std::cout << "║      Last name : ";WIDTH(20);std::cout << last_name      ;std::cout << " ║" << std::endl;
	std::cout << "║       Nickname : ";WIDTH(20);std::cout << nickname       ;std::cout << " ║" << std::endl;
	std::cout << "║   Phone number : ";WIDTH(20);std::cout << phone_number   ;std::cout << " ║" << std::endl;
	std::cout << "║ Darkest secret : ";WIDTH(20);std::cout << darkest_secret ;std::cout << " ║" << std::endl;
	std::cout << "╚═══════════════════════════════════════╝" << std::endl;
}