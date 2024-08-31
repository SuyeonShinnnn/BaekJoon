// 알고리즘 수업 - 알고리즘의 수행 시간 6
#include <iostream>
using namespace std;

int main(){
    long n;
    cin >> n;

    long sum = 0;
    
    for(long i = n - 2; i > 0; i--){
        sum += i;
    }

    long a;
    long b = sum;
    for(long i = n - 2; i > 0; i--){
        a = i;
        sum = sum + (b - a);
        b -= a;
    }
    
    cout << sum << endl;
    cout << "3" << endl;
}