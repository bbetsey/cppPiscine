NAME	= test
SRCS	= Account.cpp test.cpp
OBJS	= $(SRCS:.cpp=.o)
INC		= Account.hpp
FLAGS	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	g++ $(FLAGS) -I $(INC) $(OBJS) -o $(NAME)

%.o: %.cpp
	g++ $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
