NAME	= test
SRCS	= main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp
OBJS	= $(SRCS:.cpp=.o)
INC		= -I AMateria.hpp -I Character.hpp -I Cure.hpp -I Ice.hpp -I ICharacter.hpp -I IMateriaSource.hpp -I MateriaSource.hpp
FLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic -g

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
