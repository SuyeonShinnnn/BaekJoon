// 한수
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int count = 0;

    // 100보다 작은 수는 모두 한수
    if(n < 100)
        count = n;
    // 100보다 크거나 같은 수들이 공통적으로 갖는 한수 갯수
    else if(100 <= n)
        count = 99;

    int a, b, c;
    for(int i = 110; i <= n; i++){
        a = i / 100; //백의 자리수
        b = (i % 100) / 10; //십의 자리수
        c = i % 10;//일의 자리수

        //등차수열을 이루면 count++
        if(b - a == c - b){
            count++;
        }
    }
    cout << count << endl;
}
