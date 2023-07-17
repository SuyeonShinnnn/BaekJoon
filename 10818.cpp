#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int* arr = new int[n];

    for(int i=0;i<n;i++)
        cin >> arr[i];

    int min = 100000000, max = -1000000;

    for(int i=0;i<n;i++)
    {
        if(min>arr[i])
            min = arr[i];
        if(max<arr[i])
            max = arr[i];
    }
    cout << min << " " << max << endl;

    return 0;
}