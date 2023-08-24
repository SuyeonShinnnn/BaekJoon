#include <iostream>
#include <vector>
using namespace std;

long long sum(std::vector<int> &a)
{
    long long ans = 0;
    for(int i = 0; i < a.size(); i++)
        ans += a[i];
    return ans;
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    cout << sum(v) << endl;
}