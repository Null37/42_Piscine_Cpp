#include <iostream>


typedef struct data
{
   int a;
}Data;


uintptr_t serialize(Data* ptr)
{
    // uintptr_t keda = reinterpret_cast<uintptr_t>(ptr);
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}

int main()
{
    Data *ptr = new data;

    uintptr_t  t_p = serialize(ptr);
    std::cout << "addrese ptr = " << ptr << std::endl;
    std::cout << "addrese after cast = " << t_p << std::endl;
    Data *p2 = deserialize(t_p);
    std::cout << "addrese p2 = " << p2 << std::endl;
}