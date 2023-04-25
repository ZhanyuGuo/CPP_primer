int main()
{
    const int v2 = 0;    // 顶层常量
    int v1 = v2;         // 不是常量
    int *p1 = &v1;       // 不是常量
    int &r1 = v1;        // 顶层常量？毕竟引用不能更改，但r1确实可以改，所以也不能叫做顶层常量
    const int *p2 = &v2; // 底层常量

    int i;
    const int *const p3 = &i; // 左边底层，右边顶层

    const int &r2 = v2; // 底层常量

    return 0;
}