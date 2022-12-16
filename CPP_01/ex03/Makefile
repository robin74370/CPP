SRCS =		main.cpp\
			HumanA.cpp\
			HumanB.cpp\
			Weapon.cpp\

OBJS =		${SRCS:.cpp=.o}

NAME =		Violence_inutile

FLAGS = 	-Wall -Wextra -Werror -std=c++98

.c.o	:
			c++ $(FLAGS) -c $< -o $@

all	:		$(NAME)

$(NAME)	:	$(OBJS)
			c++ $(FLAGS) -o $(NAME) $(OBJS)

clean:
			rm -rf ${OBJS}

fclean:		clean
			rm -rf ${NAME}

re:			fclean all

.PHONY:		all clean fclean re