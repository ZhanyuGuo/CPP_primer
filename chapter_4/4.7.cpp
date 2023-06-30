#include <iostream>
using namespace std;

int main()
{
    short svalue = 32767;
    ++svalue;
    cout << svalue << endl;

    unsigned uivalue = 0;
    --uivalue;
    cout << uivalue << endl;

    unsigned short usvalue = 65535;
    ++usvalue;
    cout << usvalue << endl;

    return 0;
}