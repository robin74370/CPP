SRCS =		main.cpp\
			animal.cpp\
			Dog.cpp\
			Cat.cpp\
			Brain.cpp\

OBJS =		${SRCS:.cpp=.o}

NAME =		Abstrait_class

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