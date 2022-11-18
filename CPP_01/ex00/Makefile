SRCS =		main.cpp\
			newZombie.cpp\
			randomChump.cpp\
			Zombie.cpp\

OBJS =		${SRCS:.cpp=.o}

HEADER =	Zombie.hpp

NAME =		BraiiiiiiinnnzzzZ

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