#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    string n;
    int b;
    long long int sum = 0;
    cin >> n >> b;

    for(int i = 1; i <= n.length(); i++)
    {
        int num;
        if(n[i - 1] >= 'A' && n[i - 1] <= 'Z')
        {
            num = (int)n[i - 1] - 55;//ASKII 'A'->65 ~ 'Z'->90
        }
        else
        {
            num = n[i - 1] - '0';//문자로 저장된 숫자 int형으로 변환
        }
        sum += pow(b, n.length() - i) * num;
    }
    cout << sum << endl;
}