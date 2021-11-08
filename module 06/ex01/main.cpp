#include <iostream>


typedef struct data
{
   int a;
}Data;


uintptr_t serialize(Data* ptr)
{
    uintptr_t keda = reinterpret_cast<uintptr_t>(ptr);
    std::cout << ptr << std::endl;
    return ();
}

int main()
{
    // Data *ptr = new Data;
    // ptr->a = 10;
    // uintptr_t t =  serialize(ptr);
    //int *aa = (int*)(ptr);
   // std::cout << *ptr << std::endl;
    // unsigned long a = 2147483648;
    // int t = (int)a;
    // std::cout << t << std::endl;
    Data* ptr = new Data;
    uintptr_t keda = (uintptr_t)(ptr);
    std::cout << ptr << std::endl;
    std::cout << keda << std::endl;


}