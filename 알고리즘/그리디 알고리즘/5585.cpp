// 거스름돈
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    n = 1000 - n;

    int coin[6] = {500, 100, 50, 10, 5, 1};
    int sum = 0;

    for(int i = 0; i < 6; i++){
        sum += n / coin[i];
        n = n % coin[i];
    }
    cout << sum << endl;
}