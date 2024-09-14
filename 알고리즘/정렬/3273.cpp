// 두 수의 합
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    int* arr = new int[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int x;
    cin >> x;

    sort(arr, arr + n);

    int i = 0, j = n - 1;
    int count = 0;
    while(i < j){
        if(arr[i] + arr[j] == x){
            count++;
        }
        if(arr[i] + arr[j] <= x){
            i++;
        }
        else{
            j--;
        }
    }
    cout << count << endl;
}