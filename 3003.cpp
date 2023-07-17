#include <iostream>
using namespace std;

int main()
{
    int chess[] = {1, 1, 2, 2, 2, 8};
    int foundChess[6];

    for(int i=0;i<6;i++)
        cin >> foundChess[i];

    for(int i=0;i<6;i++)
        cout << chess[i] - foundChess[i] << ' ';
    cout << endl;
    
    return 0;
}