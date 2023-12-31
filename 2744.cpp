#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    cin >> text;

    for(int i = 0; i < text.length(); i++)
    {
        if(text[i] >= 'A' && text[i] <= 'Z')
            text[i] = tolower(text[i]);
        else if(text[i] >= 'a' && text[i] <= 'z')
            text[i] = toupper(text[i]);
    }
    cout << text << endl;
}