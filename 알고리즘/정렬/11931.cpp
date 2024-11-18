// 수 정렬하기 4

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long comp(long long a, long long b){
    return a > b;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<long long> v;

    for(int i = 0; i < n; i++){
        long long a;
        cin >> a;

        v.push_back(a);
    }

    sort(v.begin(), v.end(), comp);

    for(int i = 0; i < n; i++){
        cout << v[i] << "\n";
    }
}