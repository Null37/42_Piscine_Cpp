#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


Intern::Intern(void)
{
    std::cout << "Intern constructor default called" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Intern destructor called" << std::endl;
}

const char* Intern::Not_here::what() const throw()
{
    return "that file not in desk boos :(";
}

Form *Intern::makeForm(std::string form_name, std::string target)
{
    std::string forms[3]= {"robotomy request", "Shrubbery request", "Presidenti request"};
    Form *table[3] =  { new RRF(target), new PPF(target), new SCF(target)};
    for (int  i = 0; i < 3; i++)
    {
        if (form_name == forms[i])
        {
            std::cout << "Intern creates" << " <" <<  table[i]->gettName() << ">" << std::endl;
            return table[i];
        }
    }
    throw Not_here();
}