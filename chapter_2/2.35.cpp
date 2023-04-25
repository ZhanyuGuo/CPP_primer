int main()
{
    const int i = 42;   // 整型常量
    auto j = i;         // 整型
    const auto &k = i;  // 常量引用，加不加const都可
    auto *p = &i;       // 整型常量指针
    const auto j2 = i;  // 整型常量
    const auto &k2 = i; // 整型常量引用

    return 0;
}