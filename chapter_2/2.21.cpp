#include <iostream>
using namespace std;

int main()
{
    int i = 0;

    // double *dp = &i; // wrong
    // int *ip = i;     // wrong
    int *p = &i;     // right

    return 0;
}