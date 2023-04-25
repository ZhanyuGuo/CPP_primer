int main()
{
    int i = 0;

    // double *dp = &i; // 错误，类型不同
    // int *ip = i;     // 错误，不能用int来初始化int*
    int *p = &i;     // 正确，指针存地址

    return 0;
}