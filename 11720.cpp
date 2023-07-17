#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin>>s;
    int sum =0;

    for(int i=0;i<n;i++)
    { 
        int num = s[i] - '0';
        sum+=num;
    }
    cout << sum <<endl;

    return 0;
}