#include <iostream>
using namespace std;

int main()
{
    int arr[9];

    for(int i=0;i<9;i++)
        cin >> arr[i];

    int max = 0, index;

    for(int i=0;i<9;i++)
        if(max < arr[i])
        {
            max = arr[i];
            index = i + 1;
        }
    cout << max << endl;
    cout << index << endl;

    return 0;
}