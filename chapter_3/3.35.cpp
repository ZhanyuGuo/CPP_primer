#include <iostream>

using namespace std;

int main()
{
    int ia[10];
    int *pa = ia;

    for (int i = 0; i < 10; ++i)
    {
        *pa = 0;
        ++pa;
    }

    for (auto &i : ia)
        cout << i << ' ';

    cout << endl;

    return 0;
}