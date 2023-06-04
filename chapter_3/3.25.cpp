#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<unsigned> score(11, 0);
    unsigned int grade;
    auto it = score.begin();
    while (cin >> grade)
        (*(it + grade / 10))++;

    for (auto e : score)
        cout << e << " ";

    cout << endl;

    return 0;
}