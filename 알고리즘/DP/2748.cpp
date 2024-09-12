// 피보나치 수 2
#include <iostream>
using namespace std;

long* fib;

long fibonacci(int n){
    fib = new long[n + 1];

    fib[0] = 0; fib[1] = 1;
    for(int i = 2; i <= n; i++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    return fib[n];
}
int main(){
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
}