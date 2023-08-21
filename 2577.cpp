#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    string num = to_string(a * b * c);

    for(int i = 0; i < 10; i++)
    {
        int count = 0;
        char c = i + '0';
        for(int j = 0; j < num.length(); j++)
        {
            if(c == num[j])
                count++;
        }
        cout << count << endl;
    }
}