NAME = a.out

SRC = main.cpp
OBJS = $(SRC:.cpp=.o)

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++17

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf main

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re debug
