#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int count = 1;
    int index = 1;
    while(1){
        index += 6 * (count - 1);
        
        if(n <= index)
            break;
            
        count++; 
    }
    cout << count << endl;
}