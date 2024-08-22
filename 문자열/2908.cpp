#include <iostream>
#include <string>
using namespace std;

void swap(string& x)
{
    string tmp = x;
    x[2] = x[0];
    x[0] = tmp[2];
}
int main()
{
    string a, b;
    cin >> a >> b;
    
    swap(a);
    swap(b);

    if(stoi(a) > stoi(b))
        cout << a << endl;
    else
        cout << b << endl;

    return 0;
}