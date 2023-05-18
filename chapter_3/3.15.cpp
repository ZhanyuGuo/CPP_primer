#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> svec;
    string s;

    while (cin >> s)
    {
        svec.push_back(s);
    }

    for (auto& item : svec)
    {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}