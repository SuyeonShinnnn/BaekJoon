#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int t;
    cin >> t;

    stack<char> s;
    for(int i = 0; i < t; i++)
    {
        string ps;
        cin >> ps;

        while(!s.empty()) s.pop();

        for(int j = 0; j < ps.length(); j++)
        {
            if(s.empty())
                s.push(ps[j]);
            else if(s.top() == '(' && ps[j] == ')')
                s.pop();
            else 
                s.push(ps[j]);
        }
        if(s.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}