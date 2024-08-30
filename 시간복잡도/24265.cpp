// 알고리즘 수업 - 알고리즘의 수행 시간 4
#include <iostream>
using namespace std;

int main(){
    long n;
    cin >> n;

    long sum = 0;
    for(long i = 1; i < n; i++)
        sum += i;
    cout << sum << endl;
    cout << "2" << endl;
}