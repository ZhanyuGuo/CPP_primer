int main()
{
    // int null = 0, *p = null;  // 非法
    int null = 0, *p = &null; // 合法

    return 0;
}