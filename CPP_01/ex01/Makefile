SRCS =		main.cpp\
			zombieHorde.cpp\
			Zombie.cpp\

OBJS =		${SRCS:.cpp=.o}

HEADER =	ZombieHorde.hpp

NAME =		Zombie_Horde

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