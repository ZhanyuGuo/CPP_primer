#include <iostream>
#include <vector>

using namespace std;

bool compareInt(int *ia1_begin, int *ia1_end, int *ia2_begin, int *ia2_end)
{
    if (ia1_end - ia1_begin == ia2_end - ia2_begin)
    {
        for (int *i = ia1_begin, *j = ia2_begin; i != ia1_end, j != ia2_end; ++i, ++j)
        {
            if (*i != *j)
            {
                return false;
            }
        }
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int ia1[] = {1, 2, 3};
    int ia2[] = {1, 2, 3, 4};

    if (compareInt(begin(ia1), end(ia1), begin(ia2), end(ia2)))
        cout << "equal" << endl;
    else
        cout << "not equal" << endl;

    vector<int> iv1{1, 2, 3};
    vector<int> iv2{1, 2, 3, 4};

    if (iv1 == iv2)
        cout << "equal" << endl;
    else
        cout << "not equal" << endl;

    return 0;
}