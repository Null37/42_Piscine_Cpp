#include "ShrubberyCreationForm.hpp"
#include <fstream>

 /*  constructor and Destructor ---*/
ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form("",145, 137,"")
{
    std::cout << "ShrubberyCreationForm default constructor  is called" << std::endl;

}

SCF::ShrubberyCreationForm( std::string target): Form("ShrubberyCreationForm", 145, 137, target)
{
    std::cout << "ShrubberyCreationForm constructor  is called" << std::endl;
    
}

SCF::ShrubberyCreationForm( const SCF& _scf) : Form(_scf.gettName(), _scf.getSigngrade(), _scf.getExutegrade(), _scf.gettTarget())
{
    std::cout << "ShrubberyCreationForm  copy constructor  is called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
        std::cout << "ShrubberyCreationForm destructor is called" << std::endl;
}
    //    END C-D


void draw_tress(std::fstream &file)
{
    file << "               ,@@@@@@@," << std::endl;
    file << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
    file << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
    file << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
    file << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
    file << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
    file << "   `&%'\' ` /%&'    |.|        '\' '|8'" << std::endl;
    file << "        |o|        | |          | |" << std::endl;
    file << "        |.|        | |          | |" << std::endl;
    file << "   \\/ ._\\//_/__/  \\_//__\\/.  \\_//__/_" << std::endl;
}

void SCF::execute(Bureaucrat const & executor) const
{
    if (this->gettsigned() == true)
    {
        if (executor.getGrade() <= this->getExutegrade())
        {
            std::fstream file;
            file.open(this->gettTarget() + "_shrubber", std::ios::out | std::ios::trunc);
            draw_tress(file);
        }
        else
            throw Form::GradeTooLowException();
    }
    else
        throw Form::GradeTooLowException();
}

