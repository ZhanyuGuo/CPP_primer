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

    int size = ivec.size();

    for (decltype(size) idx = 0; idx < size - 1; idx++)
    {
        cout << ivec[idx] + ivec[idx + 1] << " ";
    }
    cout << endl;

    for (decltype(size) idx = 0; idx < size; idx++)
    {
        cout << ivec[idx] + ivec[size - idx - 1] << " ";
    }
    cout << endl;

    return 0;
}