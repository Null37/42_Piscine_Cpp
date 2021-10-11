NAME = megaphone

FLAGS = -Wall -Wextra -Werror

CP = clang++

SRC = megaphone.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CP) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@echo "no *.o"

fclean: clean
	rm -rf $(NAME)

re: fclean all