#include <iostream>

int main()
{
    int i = 42;
    int *pi = &i;
    *pi = *pi * *pi;

    // 作用：计算i的平方
    std::cout << i << std::endl;

    return 0;
}