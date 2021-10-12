NAME	= test
SRCS	= main.cpp Bureaucraft.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp
OBJS	= $(SRCS:.cpp=.o)
INC		= -I Bureaucraft.hpp -I Form.hpp -I ShrubberyCreationForm.hpp -I RobotomyRequestForm.hpp -I PresidentialPardonForm.hpp
FLAGS	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	clang++ $(FLAGS) $(INC) $(OBJS) -o $(NAME)

%.o: %.cpp
	clang++ $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all re clean fclean
