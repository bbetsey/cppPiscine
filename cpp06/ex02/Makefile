NAME	= test
SRCS	= main.cpp
OBJS	= $(SRCS:.cpp=.o)
INC		= -I Base.hpp -I A.hpp -I B.hpp -I C.hpp
FLAGS	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	clang++ $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	clang++ $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all re clean fclean
