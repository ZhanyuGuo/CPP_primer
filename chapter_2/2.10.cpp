#include <iostream>
#include <string>

std::string global_str; // 空字符串
int global_int;         // 全局，0

int main()
{
    std::string local_str; // 空字符串
    int local_int;         // 按道理是不定值，但输出结果是0

    std::cout << global_str << std::endl;
    std::cout << global_int << std::endl;
    std::cout << local_str << std::endl;
    std::cout << local_int << std::endl;

    return 0;
}