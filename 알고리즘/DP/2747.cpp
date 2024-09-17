// 피보나치 수
#include <iostream>
using namespace std;

int* fib;
void fibonacci(int n){
    fib[0] = 0; fib[1] = 1;

    for(int i = 2; i <= n; i++)
        fib[i] = fib[i - 1] + fib[i - 2];
}
int main(){
    int n;
    cin >> n;

    fib = new int[n + 1];
    fibonacci(n);

    cout << fib[n];
}