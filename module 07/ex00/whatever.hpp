#ifndef WHATEVEER_HPP
#define WHATEVEER_HPP



template<typename Y>
void swap(Y &one, Y &two)
{
    Y tmp =  one;
    one = two;
    two = tmp;
}

template<typename Y>
Y min(Y one , Y two)
{
    if(two <= one)
        return two;
    return one;
}

template<typename Y>
Y max(Y one , Y two)
{
     if(two >= one)
        return two;
    return one;
}


#endif