#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    stack<int> s;
    int count;
    for(int i = n; i <= m; i++)
    {
        count = 0;
        for(int j = i; j >= 1; j--)
        {
            if(i % j == 0) count++;
            if(count > 2 && j != 1) break;
        }
        if(count == 2) s.push(i);
    }
    if(s.empty()) 
    {
        cout << -1 << endl;
        return 0;
    }

    int sum = 0;
    for(int i = s.size(); i > 1; i--)
    {
        sum += s.top();
        s.pop();
    }
    cout << sum + s.top() << endl;
    cout << s.top() << endl;
}