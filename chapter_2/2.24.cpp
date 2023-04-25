int main()
{
    int i = 42;
    void *p = &i;  // 正确，对类型没有要求
    // long *lp = &i; // 错误，类型不同

    return 0;
}