int main()
{
    // 非法
    // int double = 3.14;

    // 合法，但标准库保留了连续两个下划线，以及下划线开头加大写字母
    // int __ = 1;

    // 非法，只能由字母、数字和下划线组成
    // int catch-22;

    // 非法，只能由字母或下划线开头
    // int 1_or_2 = 1;

    // 合法，变量名大小写敏感
    double Double = 3.14;

    return 0;
}