#include <iostream>
using namespace std;

int main()
{
    string text;
    cin >> text;
    
    int count = 0;

    for(int i=0; i<text.length(); i++)
    {
        if(text[i] != text[text.length()-1-i])
            count++;
    }
    if(count == 0)
        cout << 1 << endl;
    else    
        cout << 0 << endl;
}