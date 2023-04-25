#include <iostream>

int main()
{
    int a = 1;
    int *p = &a;
    *p = 2;
    std::cout << a << std::endl;

    int b = 3;
    p = &b;
    *p = 4;
    std::cout << b << std::endl;

    return 0;
}