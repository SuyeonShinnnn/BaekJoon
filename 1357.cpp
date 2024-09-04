#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string x, y;

    cin >> x >> y;

    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());

    int a = stoi(x);
    int b = stoi(y);

    a += b;
    cout << a << endl;

    while(a % 10 == 0){
        a = a / 10;
    }

    x = to_string(a);
    reverse(x.begin(), x.end());
    cout << x << endl;
}