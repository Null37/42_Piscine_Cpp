NAME = Animal_v2

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp WrongCat.cpp WrongAnimal.cpp
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