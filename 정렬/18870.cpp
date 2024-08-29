// 좌표 압축
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct compare{
    bool operator()(const int &a, const int &b) const{
        if(a > b)
            return false;
        else return true;
    }
};
int main(){
    long n;
    cin >> n;
    
    vector<int> v;
    vector<int> v2;
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
        v2.push_back(tmp);
    }
    // 중복 제거
    sort(v2.begin(),v2.end());
    v2.resize(unique(v2.begin(), v2.end()) - v2.begin());

    for(int i = 0; i < v.size(); i++){
        cout << lower_bound(v2.begin(), v2.end(), v[i]) - v2.begin() << " ";
    }
    cout << "\n";
}