#include <iostream>

int main()
{
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;

    // 合法，相当于d=r2
    r2 = 3.14;

    // 合法
    r2 = r1;
    std::cout << r2 << std::endl;

    // 合法
    i = r2;
    std::cout << i << std::endl;

    // 合法
    r1 = d;
    std::cout << r1 << std::endl;

    return 0;
}