// 피보나치 수 7

#include <iostream>
using namespace std;

int fibonacci(int n){
    int arr[1000001] = {0, 1};

    for(int i = 2; i <= n; i++){
        arr[i] = ((arr[i - 1] + arr[i - 2]) % 1000000007);
    }
    return arr[n];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    cout << fibonacci(n) << endl;
}