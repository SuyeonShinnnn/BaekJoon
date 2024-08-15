#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int sum = 2;

    for(int i = 0; i < n; i++){
        sum += pow(2, i);    
    }
    cout << sum * sum << endl;
}