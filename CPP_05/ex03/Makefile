SRCS =		Bureaucrat.cpp\
			Form.cpp\
			main.cpp\
			PresidentialPardonForm.cpp\
			RobotomyRequestForm.cpp\
			ShrubberyCreationForm.cpp\
			Intern.cpp\

OBJS =		${SRCS:.cpp=.o}

NAME =		Form_2

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