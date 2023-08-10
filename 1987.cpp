#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int* arr = new int[n];
    int countPrimeNum = 0;
    for(int i = 0; i < n; i++)
    {
        int count = 0;
        cin >> arr[i];
        for(int j = 1; j <= arr[i]; j++)
        {
            if(arr[i] % j == 0)
                count++;
        }
        if(count == 2) countPrimeNum++;
    }
    
    cout << countPrimeNum << endl;

    return 0;
}