#include <iostream>
using namespace std;

int main()
{
    int num1;
    cin >> num1;

    int a = -1;
    int b = -1;
    int c = -1;
    int num2 = num1;
    int count = 0;

    while(1)
    {
        a = num2 / 10;
        b = num2 % 10;
        c = (a + b) % 10;

        num2 = b * 10 + c;
        count++;

        if(num1 == num2) break;
    }
    cout << count << endl;
}