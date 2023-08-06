#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int count = 0, idx = 0;
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
            count++;
        if(count == k)
        {
            idx = i;
            break;
        }
    }

    cout << idx << endl;

    return 0;
}