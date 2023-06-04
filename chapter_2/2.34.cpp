int main()
{
    int i = 0, &r = i;
    auto a = r;

    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    const auto f = ci;
    auto &g = ci;
    // auto &h = 42;
    const auto &j = 42;
    auto k = ci, &l = i;
    auto &m = ci, *p = &ci;

    // 错误，两个初始化类型不同
    // auto &n = i, *p2 = &ci;

    a = 42;
    b = 42;
    c = 42;
    // d = 42;  // 错误，d是整型指针
    // e = 42;  // 错误，e是整型常量指针
    // g = 42;  // 错误，g是整型常量引用
}