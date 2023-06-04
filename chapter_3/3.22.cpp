#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> text{"hello", "world", "", "Mike"};
    for (auto it = text.begin(); it != text.end() && !(*it).empty(); ++it)
        for (auto &c : *it)
            c = toupper(c);

    for (auto it = text.cbegin(); it != text.cend(); ++it)
        cout << *it << endl;

    return 0;
}