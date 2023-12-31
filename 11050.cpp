#include <iostream>
using namespace std;

int factorial(int a)
{
    int sum = 1;
    for(int i = a; i > 1; i--)
        sum = sum * i;
    return sum;
}
int main()
{
    int n, k;
    cin >> n >> k;

    cout << factorial(n) / (factorial(k) * factorial(n - k)) << endl;
}