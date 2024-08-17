#include <iostream>
#include <stack>
using namespace std;

int main(){
    string text;
    while(1){
        getline(cin, text);

        if(text.compare(".") == 0)
            break;
        else{
            stack<char> s;
            
            for(int i = 0; i < text.length(); i++){
                if(text[i] == '(' || text[i] == '[')
                    s.push(text[i]);
                else if(text[i] == ')'){
                    if(!s.empty() && s.top() == '(')
                        s.pop();
                    else if(s.empty() || s.top() == '['){
                        s.push(text[i]);
                        break;
                    }
                }
                else if(text[i] == ']'){
                    if(!s.empty() && s.top() == '[')
                        s.pop();
                    else if(s.empty() || s.top() == '('){
                        s.push(text[i]);
                        break;
                    }
                    
                }
            }

            if(s.empty())
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
    }
}