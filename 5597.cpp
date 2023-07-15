#include <iostream>
#define CHECKED 1
using namespace std;

int main()
{
    int number, student[31] = {0,};

    for(int i=1;i<=28;i++)
    {
        cin >> number;
        student[number] = CHECKED;
    }
    for(int i=1;i<=30;i++)
        if(student[i]!=CHECKED)
            cout << i << endl;

    return 0;
}