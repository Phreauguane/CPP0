#pragma once

#include "Contact.hpp"

class PhoneDir
{
public:
	PhoneDir();
	PhoneDir(const PhoneDir&);
	~PhoneDir();
	void	addContact();
	void	printContacts();
	void	printContact(int id);
	bool	isIDValid(int id);
private:
	int first, max;
	Contact contacts[8];
};