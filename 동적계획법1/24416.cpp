// 알고리즘 수업 - 피보나치 수 1
#include <iostream>
using namespace std;

int* f;
int cnt1 = 1, cnt2;

int fib(int n){
    if(n == 0) return 0;
    else if(n == 1 || n == 2){
        return 1;
    }
    else{
        cnt1++;
        return fib(n - 1) + fib(n - 2);
    } 
}
int fibonacci(int n){
    f[0] = f[1] = 1;
    for(int i = 2; i < n; i++){
        cnt2++;
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}
int main(){
    int n;
    cin >> n;

    f = new int[n];
    int b = fib(n);
    int c = fibonacci(n);

    cout << cnt1 << " " << cnt2 << endl;
}