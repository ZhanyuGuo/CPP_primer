#include <iostream>

int main()
{
    // 1.9
    int sum = 0;
    for (int i = 50; i <= 100; ++i)
        sum += i;

    std::cout << sum << std::endl;

    // 1.10
    for (int i = 10; i >= 0; --i)
        std::cout << i << std::endl;

    // 1.11
    int v1, v2;
    std::cout << "Enter two numbers:" << std::endl;
    std::cin >> v1 >> v2;

    // 使v1始终小于等于v2
    if (v1 > v2)
    {
        int tmp = v1;
        v1 = v2;
        v2 = tmp;
    }

    for (int i = v1; i <= v2; ++i)
        std::cout << i << std::endl;

    return 0;
}