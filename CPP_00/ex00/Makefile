SRCS	=	megaphone.cpp
OBJS	=	${SRCS:.cpp=.o}
FLAGS	=	-c -Wall -Wextra -Werror
NAME	=	Megaphone

.c.o	:
			g++ ${FLAGS} $< -o ${<:c=o}

${NAME}	:	${OBJS}
					${g++} ${OBJS} -o ${NAME}

all		:	${NAME}

clean	:
			rm -f ${OBJS}

fclean	:	clean
				rm -f ${NAME}

re		:	fclean all

.PHONY	:	all clean fclean re