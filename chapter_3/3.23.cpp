#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<int> numbers;
    for (int i = 0; i < 10; ++i)
        numbers.push_back(i);

    for (auto it = numbers.begin(); it != numbers.end(); ++it)
        *it *= 2;

    for (auto it = numbers.cbegin(); it != numbers.cend(); ++it)
        cout << *it << endl;

    return 0;
}