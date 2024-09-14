// 동전 0
#include <iostream>
using namespace std;

int main(){
    int n;
    long k;
    cin >> n >> k;

    long* arr = new long[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int sum = 0;
    for(int i = n - 1; i > -1; i--){
        sum+= k / arr[i];
        k = k % arr[i];
    }
    cout << sum << endl;
}