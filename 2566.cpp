#include <iostream>
using namespace std;

int main()
{
    int arr[9][9];
    int max = 0;
    int col, row;

    for(int i=0; i<9; i++)
        for(int j=0; j<9; j++)
            cin >> arr[i][j];

     for(int i=0; i<9; i++)
        for(int j=0; j<9; j++)
        {
            if(arr[i][j] >= max)
            {
                max = arr[i][j];
                col = i +1;
                row = j +1;
            }
        }
    cout << max << endl;
    cout << col << ' ' << row << endl;

    return 0;
}