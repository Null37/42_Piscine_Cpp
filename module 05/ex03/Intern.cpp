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
    Form* (*table[3])(const std::string target);

    table[0] = PPF::create;
    table[1] = RRF::create;
    table[2] = SCF::create;
    for (int  i = 0; i < 3; i++)
    {
        if (form_name == forms[i])
        {
            std::cout << "Intern creates" << " <" <<  form_name << ">" << std::endl;
            return table[i](target);
        }
    }
    throw Not_here();
}