// 덱 2
#include <iostream>
#include <deque>
using namespace std;

class Deque{
private:
    int x;
    deque<int> deq;
public:
    void pushFront(){
        cin >> x;
        deq.push_front(x);
    }
    void pushBack(){
        cin >> x;
        deq.push_back(x);
    }
    void popFront(){
        if(deq.empty()){
            cout << "-1\n";
            return;
        }
        cout << deq.front() << "\n";
        deq.pop_front();
    }
    void popBack(){
        if(deq.empty()){
            cout << "-1\n";
            return;
        }
        cout << deq.back() << "\n";
        deq.pop_back();
    }
    void run(int n){
        if(n == 1){
            pushFront();
        }
        else if(n == 2){
            pushBack();
        }
        else if(n == 3){
            popFront();
        }
        else if(n == 4){
            popBack();
        }
        else if(n == 5){
            cout << deq.size() << "\n";
        }
        else if(n == 6){
            if(deq.empty())
                cout << "1" << "\n";
            else cout << "0" << "\n";
        }
        else if(n == 7){
            if(!deq.empty())
                cout << deq.front() << "\n";
            else cout << "-1" << "\n";
        }
        else if(n == 8){
            if(!deq.empty())
                cout << deq.back() << "\n";
            else cout << "-1" << "\n";
        }
    }
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long n;
    cin >> n;

    Deque d;
    for(int i = 0; i < n; i++){
        int answ;
        cin >> answ;
        d.run(answ);
    }
}