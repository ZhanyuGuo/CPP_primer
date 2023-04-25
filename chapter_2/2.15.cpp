int main()
{
    // 合法
    int ival = 1.01;

    // 非法，引用的初始值必须是一个对象
    // int &rval1 = 1.01;

    // 合法
    int &rval2 = ival;

    // 非法，引用必须初始化
    // int &rval3;

    return 0;
}