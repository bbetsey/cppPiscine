NAME	= fixed
SRCS	= main.cpp Fixed.cpp Point.cpp bsp.cpp
OBJS	= $(SRCS:.cpp=.o)
INC		= -I Fixed.hpp -I Paint.hpp
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
