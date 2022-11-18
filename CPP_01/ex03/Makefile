SRCS =		main.cpp\
			HumanA.cpp\
			HumanB.cpp\
			Weapon.cpp\

OBJS =		${SRCS:.cpp=.o}

NAME =		Violence_inutile

CFLAGS = 	-Wall -Wextra -Werror

.c.o	:
			clang++ $(FLAGS) -c $< -o $@

all	:		$(NAME)

$(NAME)	:	$(OBJS)
			clang++ $(FLAGS) -o $(NAME) $(OBJS)

clean:
			rm -rf ${OBJS}

fclean:		clean
			rm -rf ${NAME}

re:			fclean all

.PHONY:		all clean fclean re