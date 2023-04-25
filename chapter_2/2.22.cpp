int main()
{
    int i = 1;
    int *p = &i;

    if (p)
        ; // 判断p是否为空指针
    if (*p)
        ; // 判断p所指的对象是否非零

    return 0;
}