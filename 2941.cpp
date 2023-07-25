#include <iostream>
using namespace std;

int main()
{
    string text;
    cin >> text;

    int count = 0;

    for(int i=0; i<text.length(); i++)
    {
        if((text[i] == 'c' || text[i] == 's' || text[i] == 'z') && text[i+1] == '=')
        {
            count++;
            i++;
        }
        else if((text[i] == 'c' || text[i] == 'd') && text[i+1] == '-')
        {
            count++;
            i++;
        }
        // else if(text[i] == 'd' && text[i+1] == '-')
        // {
        //     count++;
        //     i++;
        // }
        else if((text[i] == 'l' || text[i] == 'n') && text[i+1] == 'j')
        {
            count++;
            i++;
        }
        // else if(text[i] == 'n' && text[i+1] == 'j')
        // {
        //     count++;
        //     i++;
        // }
        // else if(text[i] == 's' && text[i+1] == '=')
        // {
        //     count++;
        //     i++;
        // }
        // else if(text[i] == 'z' && text[i+1] == '=')
        // {
        //     count++;
        //     i++;
        // }
        else if(text[i] == 'd' && text[i+1] == 'z' && text[i+2] == '=')
        {
            count++;
            i+=2;
        }
        else
            count ++;
    }
    cout << count << endl;

    return 0;
}