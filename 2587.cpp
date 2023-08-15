#include <iostream>
#include <algorithm>
#define SIZE 5
using namespace std;

int main()
{
    int number[SIZE];
    int sum = 0;

    for(int i = 0; i < SIZE; i++)
    {
        cin >> number[i];
        sum += number[i];
    }

    sort(number, number + SIZE);

    cout << sum / SIZE << endl;
    cout << number[SIZE/2] << endl;  
}