#include <iostream>
using namespace std;

int main()
{
    int getOn, getOff, current = 0;
    int max = 0;

    for(int i = 0; i < 4; i++)
    {
        cin >> getOff >> getOn;
        current = current + (getOn - getOff);

        if(current > max)
            max = current;
    }

    cout << max << endl;
}