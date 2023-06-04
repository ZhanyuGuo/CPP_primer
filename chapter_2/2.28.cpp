int main()
{
    // int i, *const cp;      // 前面合法, *const cp需要在初始化时赋值
    // int *p1, *const p2;    // 同上
    // const int ic, &r = ic; // 错误，ic需要初始化时赋值
    // const int *const p3;   // 错误，需要初始化时赋值
    const int *p; // 正确，指向对象的值为常量，自身可以随时改变指向

    return 0;
}