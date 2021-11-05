#include "PresidentialPardonForm.hpp"

/*
        getter and setters
    */
PPF::PresidentialPardonForm(void) : Form("", 25, 5, "")
{
    std::cout << "PresidentialPardonForm default constructor  is called" << std::endl;
}

PPF::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5, target)
{
    std::cout << "PresidentialPardonForm constructor  is called" << std::endl;
}

PPF::PresidentialPardonForm(const PPF &_ppf): Form(_ppf.gettName(), _ppf.getSigngrade(), _ppf.getExutegrade(), _ppf.gettTarget())
{
    std::cout << "PresidentialPardonForm copy constructor  is called" << std::endl;
}

PPF::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructor is called" << std::endl;
}

//    EDN G-S

void PPF::operator=(const PPF&)
{
    
}


void PPF::execute(Bureaucrat const & executor) const
{
    if (this->gettsigned() == true)
    {
        if (executor.getGrade() <= this->getExutegrade())
            std::cout << "<" << this->gettTarget() << ">" << " as been pardoned by Zafod Beeblebrox" << std::endl;
        else
            throw Form::GradeTooLowException();
    }
    else
        throw Form::GradeTooLowException();
}