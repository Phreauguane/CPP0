#include <iostream>
#include <string>

void	print_upper(std::string str)
{
	for (size_t i = 0; i < str.size(); i++)
	{
		std::cout << (char)toupper(str[i]);
	}
}

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	
	for (int i = 1; i < ac; i++)
	{
		print_upper(av[i]);
	}
	std::cout << std::endl;
}