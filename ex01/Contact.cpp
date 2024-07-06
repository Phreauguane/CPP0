#include "Contact.hpp"

#include <iostream>

Contact::Contact()
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
	first_name = last_name = nickname = phone_number = darkest_secret = nullptr;

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

	std::cout << "\nContact \"" << this->first_name << "\" added successfully";
}