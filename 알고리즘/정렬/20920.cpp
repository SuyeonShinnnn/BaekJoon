// 영단어 암기는 괴로워

#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

static bool comp(pair<string, int>& a, pair<string, int>& b){
    if(a.second == b.second){
        if(a.first.length() == b.first.length())
            return a.first < b.first;
        return a.first.length() > b.first.length();
    }
    return a.second > b.second; 
}
int main(){
    int n, m;
    cin >> n >> m;

    map<string, int> voca;

    for(int i = 0; i < n; i++){
        string target;
        cin >> target;

        if(target.length() < m)
            continue;

        if(voca.find(target) != voca.end()){ // 이미 있는 단어
            voca[target] += 1;
        }
        else{
            voca.insert(pair<string, int>(target, 1));
        }
    }
    vector<pair<string, int>> v(voca.begin(), voca.end());
    sort(v.begin(), v.end(), comp);

    for(int i = 0; i < v.size(); i++)
        cout << v[i].first << "\n";
}