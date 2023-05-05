#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str_in, str_sum;

    // while (cin >> str_in)
    // {
    //     str_sum += str_in;
    // }

    while (cin >> str_in)
    {
        str_sum += str_in + " ";
    }

    cout << str_sum << endl;

    return 0;
}