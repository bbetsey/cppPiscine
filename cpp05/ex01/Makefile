NAME	= test
SRCS	= main.cpp Bureaucraft.cpp Form.cpp
OBJS	= $(SRCS:.cpp=.o)
INC		= -I Bureaucraft.hpp -I Form.hpp
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
