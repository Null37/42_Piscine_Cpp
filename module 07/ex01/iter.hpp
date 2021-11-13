#ifndef ITER_HPP
#define ITER_HPP


template<typename S>
void iter(S* first, int  size, void (*fp)(const S &))
{
    for (int i = 0; i < size; i++)
    {
        fp(first[i]);
    }
}

#endif