// 팩토리얼 0의 개수
#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n, count = 0;
    cin >> n;

    while(n != 0){
        if(n % 125 == 0)
            count += 3;
        else if(n % 25 == 0)
            count += 2;
        else if(n % 5 == 0)
            count++;
        n--;
    }
    
    cout << count << "\n";
}