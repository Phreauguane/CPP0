#pragma once

#include <string>

class Contact
{
public:
	Contact() = default;
	Contact(const Contact &contact);
	~Contact() = default;
	void getInfoFromUser();
	std::string first_name, last_name, nickname, phone_number, darkest_secret;
};
