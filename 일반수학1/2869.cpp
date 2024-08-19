#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a, b, v;
    cin >> a >> b >> v;

    int count = 1;
    v -= a;
    cout << a << " " << b << " " << v << endl;

    count += v / (a - b);
    
    if(v % (a - b) != 0)    
        count++;
         
    cout << count << endl;
}