#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int number[5];
    int sum = 0;
    for(int i = 0; i < 5; i++)
    {
        cin >> number[i];
        sum += pow(number[i], 2);
    }
    cout << sum % 10 << endl;
}