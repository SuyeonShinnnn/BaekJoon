#include <iostream>
using namespace std;

void reverse(int a, int b, int* arr){
    int start = a - 1;
    int end = b - 1;
    int tmp;

    for(start; start < end; start++ & end--){
        tmp = arr[start];
        arr[start] = arr[end];
        arr[end] = tmp;
    }
}
int main(){
    int n, m;
    cin >> n >> m;

    int* arr = new int[n];
    for(int i = 0; i < n; i++)
        arr[i] = i + 1;

    int a, b;
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        if(a == b) continue;
        reverse(a, b, arr);
    }
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}