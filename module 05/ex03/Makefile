NAME = Start_work

SRC = main.cpp Bureaucrat.cpp  Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp\
 PresidentialPardonForm.cpp Intern.cpp
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