#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> ivec;
    int i;

    while (cin >> i)
    {
        ivec.push_back(i);
    }

    for (auto &item : ivec)
    {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}