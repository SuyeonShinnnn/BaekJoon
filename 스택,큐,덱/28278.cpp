#include <iostream>
#include <vector>
using namespace std;

class Stack{
private:
    vector<int> s;
public:
    void push(int num){
        s.push_back(num);
    }
    int pop(){
        if(s.empty())
            return -1;
        else{
            int num = s.back();
            s.pop_back();
            return num;
        }
    }
    void run(int answ){
        if(answ == 1){
            int num;
            cin >> num;
            push(num);
        }
        else if(answ == 2){
            if(s.empty())
                cout << "-1\n";
            else{
                cout << pop() << "\n";
            }
        }
        else if(answ == 3){
            cout << s.size() << "\n";
        }
        else if(answ == 4){
            if(s.empty())
                cout << "1\n";
            else cout << "0\n";
        }
        else if(answ == 5){
            if(s.empty())
                cout << "-1\n";
            else{
                cout << s.back() << "\n";
            }
        }
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int answ;
    Stack s;
    for(int i = 0; i < n; i++){
        cin >> answ;
        s.run(answ);
    }
}