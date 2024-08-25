// 단어 정렬

#include <iostream>
#include <set>
using namespace std;

struct compare{
    bool operator() (const string& a, const string& b) const{
        // a길이 < b길이 -> true
        if(a.length() < b.length())
            return true;

        // 길이 같으면 사전 순으로
        else if(a.length() == b.length()){
            return a < b;
        }
        else return false;
    }
};

int main(){
    int n;
    cin >> n;

    set<string, compare> s;
     for(int i = 0; i < n; i++){
        string a;
        cin >> a;
        s.insert(a);
    }

    for (auto str : s) {
		cout << str << '\n';
	}
}