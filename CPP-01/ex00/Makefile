NAME = zombie

SRC = main.cpp \
	  newZombie.cpp \
	  randomChump.cpp \
	  Zombie.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re