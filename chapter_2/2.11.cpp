extern int ix = 1024; // 定义，等价于int ix = 1024;
int iy;               // 定义
extern int iz;        // 声明

int main()
{
    // extern int lix = 1024; // 错误，不能对局部变量进行
    int liy;        // 定义
    extern int liz; // 声明

    return 0;
}