#pragma once

#include <string>

class Contact
{
public:
	Contact();
	Contact(const Contact &contact);
	~Contact();
	void getInfoFromUser();
	void printContact(int id);
	void printContactFull();
private:
	std::string first_name, last_name, nickname, phone_number, darkest_secret;
};
