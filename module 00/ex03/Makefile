NAME = BANK

FLAGS = -Wall -Wextra -Werror

CP = clang++

SRC = Account.cpp tests.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CP) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@echo "no *.o"

fclean: clean
	rm -rf $(NAME)

re: fclean all