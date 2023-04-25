#include <iostream>

int main()
{
    int sum = 0, value = 0;

    // 一个有趣的输入：1 2 3 1.1，会终止输入（非法），但1.1转换为1也被计入求和
    while (std::cin >> value)
        sum += value;

    std::cout << "The sum is: " << sum << std::endl;

    return 0;
}