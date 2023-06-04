#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string s1 = "aabb";
    string s2 = "aabb";
    if (s1 == s2)
        cout << "equal" << endl;
    else
        cout << "not equal" << endl;

    const char ca1[] = {'a', 'a', 'b', 'b'};
    const char ca2[] = "aabb";
    if (strcmp(ca1, ca2) == 0)
        cout << "equal" << endl;
    else
        cout << "not equal" << endl;

    return 0;
}