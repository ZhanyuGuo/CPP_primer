#include <iostream>

int main()
{
    std::cout << "Enter two numbers:";
    std::cout << std::endl;

    int v1, v2;
    std::cin >> v1;
    std::cin >> v2;
    std::cout << "The mul of ";
    std::cout << v1;
    std::cout << " and ";
    std::cout << v2;
    std::cout << " is ";
    std::cout << v1 * v2;
    std::cout << std::endl;

    return 0;
}