#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> ivec, sum_1, sum_2;
    int i;

    while (cin >> i)
    {
        ivec.push_back(i);
    }

    for (auto it = ivec.cbegin(); it + 1 != ivec.cend(); ++it)
        sum_1.push_back(*it + *(it + 1));

    for (auto &i : sum_1)
        cout << i << " ";

    cout << endl;

    for (auto it_begin = ivec.cbegin(), it_end = ivec.cend() - 1; it_begin <= it_end; ++it_begin, --it_end)
        sum_2.push_back(*it_begin + *it_end);

    for (auto &i : sum_2)
        cout << i << " ";

    cout << endl;

    return 0;
}