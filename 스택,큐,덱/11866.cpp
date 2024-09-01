// 요세푸스 문제 0
#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    queue<int> q;
    for(int i = 0; i < n; i++)
        q.push(i + 1);

    cout << "<";
    while(q.size() != 1){
        int i = k;

        // k번째 전 수들을 pop하여 맨 끝으로 다시 push
        while(--i != 0){
            q.push(q.front());
            q.pop();
        }
        // k번째 수 출력 후 pop
        cout << q.front() << ", ";
        q.pop();
    }
    cout << q.front() << ">" << endl;
}