#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int ia[10];
    for (size_t i = 0; i < 10; i++)
        ia[i] = i;

    int ia2[10];
    for (size_t i = 0; i < 10; i++)
        ia2[i] = ia[i];

    for (auto &i : ia2)
        cout << i << ' ';

    cout << endl;

    vector<int> iv;
    for (decltype(iv.size()) i = 0; i < 10; i++)
        iv.push_back(i);

    vector<int> iv2(iv);
    for (auto &i : iv2)
        cout << i << ' ';

    cout << endl;

    return 0;
}