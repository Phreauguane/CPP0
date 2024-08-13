NAME	=	contacts

CPP		=	c++ -Wall -Wextra -Werror -std=c++98

SRC		=	contacts.cpp		\
			Contact.cpp			\
			PhoneDir.cpp

all		:
	$(CPP) $(SRC) -o $(NAME)

clean	:
	rm -f $(NAME)

fclean	:	clean

re		:	fclean all