#include <iostream>
#include <string>

void	search(void)
{
	std::cout << "Search func executed" << std::endl;
}

void	add(void)
{
	std::cout << "Add func executed" << std::endl;
}

int	main(void)
{
	while (true)
	{
		std::string str;

		std::cout << "> ";
		std::cin >> str;

		if (str == "EXIT")
			return (0);
		if (str == "SEARCH")
			search();
		if (str == "ADD")
			add();
	}
}