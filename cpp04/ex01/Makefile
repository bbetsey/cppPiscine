NAME	= test
SRCS	= main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
OBJS	= $(SRCS:.cpp=.o)
INT		= -I Animal.hpp -I Cat.hpp -I Dog.hpp -I Brain.hpp
FLAGS	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	clang++ $(FLAGS) $(INT) $(OBJS) -o $(NAME)

%.o: %.cpp
	clang++ $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all re clean fclean
