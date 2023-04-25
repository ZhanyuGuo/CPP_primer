#include <iostream>

int main()
{
    std::cout << "/*";
    std::cout << "*/";
    // std::cout << /*"*/" */;  // 错误，引号被注释掉了
    std::cout << /* "*/ " /* " /*" */;

    return 0;
}