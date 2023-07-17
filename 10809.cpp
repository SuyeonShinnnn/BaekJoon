#include <iostream>
#define DEFUALT -1
using namespace std;

int main()
{
    string s;
    cin >> s;
    
    for(char i='a';i<='z';i++)
    {
        int answ = DEFUALT;
        for(int j=0;j<s.length();j++)
        {
            if(i==s[j])
            {
                answ = j;
                break;
            }
        }
        cout<<answ<<' ';
    }
    return 0;
}