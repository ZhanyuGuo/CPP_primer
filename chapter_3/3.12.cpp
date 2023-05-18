#include <vector>
#include <string>
using namespace std;

int main()
{
    // 正确
    vector<vector<int>> ivec;

    // 错误，类型不一致
    // vector<string> svec = ivec;

    // 正确
    vector<string> svec(10, "null");

    return 0;
}