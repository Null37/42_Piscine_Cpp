#include <iostream>
#include <fstream>

void error_handling(int ac, char *av[], std::fstream &file)
{
    if (ac != 4)
    {
        std::cout << "Error: in argument" << "\n";
        exit(1);
    }
    std::string s1 = av[2];
    std::string s2 = av[3];
    if (s1 == s2)
    {
        std::cout  << "Error: s1 and s2 the same" << "\n";
        exit(1);
    }
    file.open(av[1], std::ios::out | std::ios::in);
    if (!file)
    {
        std::cout  << "Error: file not found" << "\n";
        exit(1);
    }
    int checkfile = file.peek() == std::fstream::traits_type::eof();
    if (checkfile == 1)
    {
        std::cout << "Error: the file is empty" << "\n";
        file.close();
        exit(1);
    }
}

void create_file(char *av[], std::fstream &replace_file)
{
    std::string nameold = av[1];
    std::string newfile = nameold + ".replace";
    replace_file.open(newfile, std::ios::out);
    if(!replace_file)
    {
        std::cout << "Error: file not create" << "\n";
        exit(1);
    }
}

int main(int ac, char *av[])
{
    std::fstream file;
    std::fstream replace_file;
    std::string line;
    std::string token;
    size_t pos = 0;

    error_handling(ac,av, file);
    create_file(av, replace_file);
    std::string delimiter = av[2];
    std::string replace = av[3];
    while(!file.eof())
    {
        getline(file, line);
        //find return max unsingnd long if not find delimiter
        if (line.find(delimiter) == std::string::npos)
        {
            replace_file << line << "\n";
            continue ;
        }
        while ((pos = line.find(delimiter)) != std::string::npos)
        {
            token = line.substr(0, pos);
            replace_file << token;
            line.erase(0, pos + delimiter.length());
            replace_file << replace;
        }
        if (!file.eof())
            replace_file << "\n";
    }
    return 0;
}