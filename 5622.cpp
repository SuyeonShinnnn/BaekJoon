#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[16];
    cin >> str;

    int minTime = 0;
    int index[26] = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};

    for(int i=0;i<strlen(str);i++)
    {
        minTime += index[str[i]-'A'];
    }
    cout << minTime << endl;

    return 0;
}