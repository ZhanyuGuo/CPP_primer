#include <iostream>

int main()
{
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype(a = b) d = a; // 这里括号内没有真正地赋值（**编译器分析表达式并得到它的类型，而不实际计算表达式的值**）

    std::cout << a << " " << b << " " << c << " " << d << std::endl;

    return 0;
}