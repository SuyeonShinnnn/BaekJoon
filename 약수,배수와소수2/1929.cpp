#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    
    long m, n;
    cin >> m >> n;

    for(int i = m; i <= n; i++)
    {
        bool isPrime = true;
        for(int j = sqrt(i); j > 1; j--){
            if(i % j == 0)
                isPrime = false;
        }
        if(isPrime) cout << i << "\n";
    }
}