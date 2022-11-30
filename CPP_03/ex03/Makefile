SRCS =		main.cpp\
			ClapTrap.cpp\
			ScavTrap.cpp\
			FragTrap.cpp\
			DiamondTrap.cpp\

OBJS =		${SRCS:.cpp=.o}

NAME =		Now_its_weird

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