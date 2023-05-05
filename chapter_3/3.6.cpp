#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "sahdjkak 213sdan";

    for (auto &c : str)
    {
        c = 'X';
    }

    cout << str << endl;

    return 0;
}