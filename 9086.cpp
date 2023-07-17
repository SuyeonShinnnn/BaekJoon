#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string* s = new string[t];

    for(int i=0;i<t;i++)
        cin >> s[i];

    for(int i=0;i<t;i++)
        cout << s[i].front() << s[i].back() << endl;
    
    return 0;
}