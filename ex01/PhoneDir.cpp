#include "PhoneDir.hpp"

#include <iostream>

PhoneDir::PhoneDir()
{
	first = max = 0;
}

PhoneDir::~PhoneDir()
{
}

void PhoneDir::addContact()
{
	contacts[first].getInfoFromUser();
	std::cout << std::endl;
	++first %= 8;
	max += int(max < 7);
}

void PhoneDir::printContacts()
{
	std::cout << "╔══════════╦══════════╦══════════╦══════════╗" << std::endl;
	std::cout << "║    ID    ║First name║ Lastname ║ Nickname ║" << std::endl;
	for (int i = 0; i <= max; i++)
	{
		contacts[i].printContact(i);
		std::cout << std::endl;	
	}
	std::cout << "╚══════════╩══════════╩══════════╩══════════╝" << std::endl;
}

void PhoneDir::printContact(int id)
{
	contacts[id].printContactFull();
}

bool PhoneDir::isIDValid(int id)
{
	return id >= 0 && id < max;
}
