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

    // r1 = v2; // 合法，r1不是常量
    // p1 = p2; // 非法，p2所指对象是常量
    // p2 = p1; // 合法，p2可改变对象
    // p1 = p3; // 非法，p3所指对象是常量
    // p2 = p3; // 合法，p2可改变对象，且所指对象是常量，符合p3

    return 0;
}