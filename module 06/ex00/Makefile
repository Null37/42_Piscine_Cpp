NAME = convert

SRC = main.cpp convert.cpp 
FLAGS =  -Wall -Wextra -Werror

CP = clang++ -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	$(CP) $(SRC) $(FLAGS) -o $(NAME)

clean:
	@echo "no *.o"

fclean: clean
	rm -rf $(NAME)

re: fclean all