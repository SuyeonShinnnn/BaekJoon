// 풍선 터뜨리기
#include <iostream>
#include <deque>
using namespace std;

deque<pair<int,int>> d;

void moveRight(int a){
    for(int i = 0; i < a - 1; i++){
        d.push_back(d.front());
        d.pop_front();
    }
}
void moveLeft(int a){
    for(int i = 0; i < abs(a); i++){
        d.push_front(d.back());
        d.pop_back();
    }
}
int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        d.push_back(make_pair(tmp, i + 1));
    }
    int a;
    while(!d.empty()){
        cout << d.front().second << " ";

        a = d.front().first;

        d.pop_front();

        if(d.empty()) break;

        if(a > 0){
            moveRight(a);
        }
        else{
            moveLeft(a);
        }
    }
    cout << "\n";
}