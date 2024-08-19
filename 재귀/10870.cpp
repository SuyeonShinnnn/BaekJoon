#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int num_1 = 0;
    int num_2 = 1;
    int num_n = num_1 + num_2;

    if(n == 0) num_n = 0;
    
    for(int i = 2; i < n; i++)
    {
       num_1 = num_2;
       num_2 = num_n;
       num_n = num_1 + num_2;
    }
    cout << num_n << endl;
}