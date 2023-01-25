SRCS =		main.cpp\

OBJS =		${SRCS:.cpp=.o}

NAME =		Serialisation

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