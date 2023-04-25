int main()
{
    int a;
    int i, *const cp = &a;
    int *p1, *const p2 = &a;
    const int ic = 123, &r = ic;
    const int *const p3 = &a;
    const int *p;

    i = ic;   // 合法，左边为可变的变量
    // p1 = p3;  // 非法，p3是常量指针
    // p1 = &ic; // 非法，ic是常量
    // p3 = &ic; // 非法，p3是指针常量
    // p2 = p1;  // 非法，p2是指针常量
    // ic = *p3; // 非法，ic是常量

    return 0;
}