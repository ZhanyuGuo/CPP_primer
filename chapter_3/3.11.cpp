#include <iostream>
#include <string>
using namespace std;

int main()
{
    const string s = "Keep out!";

    for (auto &c : s)
    {
        // 合法但不能更改c，可以节省内存空间（不创建副本）
    }

    return 0;
}