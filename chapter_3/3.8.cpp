#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "sahdjkak 213sdan";

    // while
    // string::size_type index = 0;
    // while (index < str.size())
    // {
    //     str[index] = 'X';
    //     ++index;
    // }

    // for更好，作用域明确，更简洁
    for (string::size_type index = 0; index < str.size(); ++index)
    {
        str[index] = 'X';
    }

    cout << str << endl;

    return 0;
}