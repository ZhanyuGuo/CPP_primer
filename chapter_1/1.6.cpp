#include <iostream>

int main()
{
    std::cout << "Enter two numbers:" << std::endl;

    int v1, v2;
    std::cin >> v1 >> v2;

    // 不合法，分号代表一条语句的结束，后面的语句缺少左值。
    // std::cout << "The mul of " << v1;
    //           << " and " << v2;
    //           << " is " << v1 * v2 << std::endl;

    // 合法
    std::cout << "The mul of " << v1
              << " and " << v2
              << " is " << v1 * v2 << std::endl;

    return 0;
}