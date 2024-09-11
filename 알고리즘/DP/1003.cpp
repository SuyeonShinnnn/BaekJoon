// 피보나치 함수
#include <iostream>
using namespace std;

int* c0;
int* c1;

void fibonacci(int n) {
    c0 = new int[n + 1]; 
    c1 = new int[n + 1];
    
    c0[0] = 1; c1[0] = 0;
    c0[1] = 0; c1[1] = 1;
    c0[2] = 1; c1[2] = 1;
    c0[3] = 1; c1[3] = 2;
    
    for(int i = 4; i <= n; i++){
        c0[i] = c0[i - 1] + c0[i -2];
        c1[i] = c1[i - 1] + c1[i - 2];
    }
}
int main(){
    
    int t;
    cin >> t;

    int n;
    while(t-- > 0){
        cin >> n;
        fibonacci(n);
        
        cout << c0[n] << ' ' << c1[n] << "\n";
    }
}