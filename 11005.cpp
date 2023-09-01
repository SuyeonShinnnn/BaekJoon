#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    int n, b;
    cin >> n >> b;

    while (n / b != 0)
    {
        s.push(n % b);
        n = n / b;
    }
    s.push(n);

    int size = s.size();
    for (int i = 0; i < size; i++)
    {
        if (s.top() >= 0 && s.top() <= 9)
            cout << s.top();
            
        else//10 ~ 35를 A ~ Z 변환
        {
            int c = s.top() + 55;
            cout << (char)c;
        }
        s.pop();
    }
    cout << endl;
}