#include <iostream>
using namespace std;

int main()
{
    int a, b;

    while(!(cin >> a >> b).eof())//End Of File(데이터가 존재하지 않을 때 반복문 종료)
        cout << a+b << endl;
    
    return 0;
}