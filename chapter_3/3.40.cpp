#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    char ca1[] = "Hello";
    char ca2[] = "World";
    char ca3[16];

    strcpy(ca3, ca1);
    strcat(ca3, ca2);

    cout << ca3 << endl;

    return 0;
}