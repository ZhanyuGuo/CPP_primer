#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 3, 2, 4};
    cout << *vec.begin() << endl;
    cout << *(vec.begin()) << endl;
    cout << *vec.begin() + 1 << endl;
    cout << (*(vec.begin()) + 1) << endl;
    return 0;
}