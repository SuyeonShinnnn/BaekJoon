#include <iostream>
using namespace std;

int main()
{
    int n;

    while(1)
    {
        cin >> n;
        if(n == -1) break;

        int* remainder = new int[n + 1];
        int sum = 0, k = 0;
        for(int i = 1; i < n; i++)
        {
            if(n % i == 0)
            {
                remainder[k++] = i;
                sum += i;
            }
            if(sum > n) break;
        }

        cout << n;
        if(sum == n)
        {
            cout << " = ";

            int i;
            for(i = 0; i < k - 1; i++)
                cout << remainder[i] << " + ";
            cout << remainder[i] << endl;
        }
        else cout << " is NOT perfect." << endl;
    }
    return 0;
}