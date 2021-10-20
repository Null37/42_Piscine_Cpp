NAME = karenFilter

SRC = main.cpp Karen.cpp

FLAGS = -Wall -Wextra -Werror

CP = clang++ -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	$(CP) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@echo "no *.o"

fclean: clean
	rm -rf $(NAME)

re: fclean all