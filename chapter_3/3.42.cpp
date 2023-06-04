#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> iv{1, 2, 3};
    int ia[3];
    for (int i = 0; i < 3; ++i)
        ia[i] = iv[i];

    for (auto &i : ia)
        cout << i << ' ';

    cout << endl;

    return 0;
}