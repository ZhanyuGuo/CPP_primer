int main()
{
    // (a)
    // int i = -1, &r = 0; // 引用非法，0是常量，但&r不是对常量的引用，可以对r更改但显然不能更改0

    // (g)(b)
    // const int i2 = i, &r = i; // 合法
    // int *const p2 = &i2;      // 非法，i2值不能改变，但这里可以改变p2所指对象，也就是i2

    // (c)
    // const int i = -1, &r = 0; // 合法

    // (d)
    // const int i2 = i;
    // const int *const p3 = &i2; // 合法，指向对象是常量

    // (e)
    // const int i2 = i;
    // const int *p1 = &i2; // 合法

    // (f)
    // const int &const r2; // 非法，需要初始化

    return 0;
}