//나만의 답()
#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int minTime = 0;
    
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='P'&&str[i]<='S')
            minTime+=8;
        else if(str[i]>='W'&&str[i]<='Z')
            minTime+=10;
        else
        {
            int n = (int)str[i]-64;

            if(n%3 == 0)
                minTime+=n/3+2;
            else
                minTime+=n/3+3;
        }
    }
    cout << minTime << endl;

    return 0;
}
