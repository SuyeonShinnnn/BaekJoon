#include <iostream>
#include <string>
using namespace std;


int main()
{
    string text;

    while(1)
    {
        getline(cin, text);
        
        if(text == "#")
            break;

        int count = 0;
        for(int i = 0; i< text.length(); i++)
        {
            text[i] = tolower(text[i]);

            char c= text[i];
            if(c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o')
                count++;
        }
        cout << count << endl;
    }
}
