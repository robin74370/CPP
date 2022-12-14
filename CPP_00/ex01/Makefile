SRCS =		phonebook.cpp\
			contact.cpp\
			main.cpp\

OBJS =		${SRCS:.cpp=.o}

HEADER =	phonebook.hpp

NAME =		Phonebook

CFLAGS = 	-Wall -Wextra -Werror -std=c++98

.c.o	:
			g++ $(FLAGS) -c $< -o $@

all	:		$(NAME)

$(NAME)	:	$(OBJS)
			clang++ $(FLAGS) -o $(NAME) $(OBJS)

clean:
			rm -rf ${OBJS}

fclean:		clean
			rm -rf ${NAME}

re:			fclean all

.PHONY:		all clean fclean re