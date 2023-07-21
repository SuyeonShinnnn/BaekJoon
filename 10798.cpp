#include <iostream>
using namespace std;

int main()
{
    char text[5][15] = {{'\0',},};

    for(int i=0; i<5; i++)
        cin >> text[i];

    for(int i=0;i<15;i++)
        for(int j=0;j<5;j++)
            if(text[j][i] != '\0')
                cout << text[j][i];

    cout << endl;

    return 0;
}