// 덱
#include <iostream>
#include <deque>
using namespace std;

class Deque{
private:
    deque<long> d;
public:
    void pushFront(){
        long x;
        cin >> x;

        d.push_front(x);
    }
    void pushBack(){
        long x;
        cin >> x;

        d.push_back(x);
    }
    void popFront(){
        if(d.empty())
            cout << "-1\n";
        else{
            cout << d.front() << "\n";
            d.pop_front();
        }
    }
    void popBack(){
        if(d.empty())
            cout << "-1\n";
        else{
            cout << d.back() << "\n";
            d.pop_back();
        }
    }
    void printFront(){
        if(d.empty()) cout << "-1\n";
        else cout << d.front() << "\n";
    }
    void printBack(){
        if(d.empty()) cout << "-1\n";
        else cout << d.back() << "\n";
    }
    void runDeque(string s){
        if(s == "push_front"){
            pushFront();
        }
        else if(s == "push_back"){
            pushBack();
        } 
        else if(s == "pop_front"){
            popFront();
        } 
        else if(s == "pop_back"){
            popBack();
        } 
        else if(s == "size"){
            cout << d.size() << "\n";
        } 
        else if(s == "empty"){
            if(d.empty()) cout << "1\n";
            else cout << "0\n";
        } 
        else if(s == "front"){
            printFront();
        } 
        else if(s == "back"){
            printBack();
        } 
    }
};
int main(){
    int n;
    cin >> n;

    Deque d;
    string s;
    while(n-- > 0){
        cin >> s;
        d.runDeque(s);
    }
}