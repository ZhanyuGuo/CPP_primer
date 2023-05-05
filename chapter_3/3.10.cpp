#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str_in, str;
    getline(cin, str_in);

    for (auto &c : str_in)
    {
        if (!ispunct(c))
            str += c;
    }

    cout << str << endl;

    return 0;
}