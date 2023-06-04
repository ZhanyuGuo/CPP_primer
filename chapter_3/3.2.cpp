#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str_in;

    // while (getline(cin, str_in))
    // {
    //     cout << str_in << endl;
    // }

    while (cin >> str_in)
    {
        cout << str_in << endl;
    }

    return 0;
}