#include "easyfind.hpp"

const char* NOT_FOUND::what() const throw()
{
    return "Not_found :(";
}

int main()
{
    std::vector<int> coantainer;
    coantainer.push_back(5);
    coantainer.push_back(10);
    coantainer.push_back(13);
    //std::array<int, 5> coantainer = {10, 2, 3, 4, 5};
    // std::list<int> coantainer;
    // coantainer.push_back(5);
    // coantainer.push_back(10);
    // coantainer.push_back(13);
    // coantainer.push_back(10);
    try
    {
        easyfind(coantainer, 5);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
}

