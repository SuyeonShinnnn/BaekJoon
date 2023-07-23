#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    getline(cin, text);

    int count = 0;
    for(int i=0; i<text.length(); i++)
        if(text[i] == ' ')
            count++;

    if(text[0] == ' ')
        count--;
    if(text[text.length()-1] == ' ')
        count--;

    cout << count+1 << endl;

    return 0;
}