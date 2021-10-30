NAME = Brain

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
FLAGS =  -fsanitize=address

CP = clang++ -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	$(CP) $(SRC) $(FLAGS) -o $(NAME)

clean:
	@echo "no *.o"

fclean: clean
	rm -rf $(NAME)

re: fclean all