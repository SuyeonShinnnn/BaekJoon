#include <iostream>
using namespace std;

bool checkGroupWord(string word)
{
    for(int i = 1; i < word.length(); i++)
    {
        if(word[i - 1] != word[i])
        {
            for(int j = 0; j < i; j++)
                if(word[j] == word[i])
                    return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;

    int count = 0;
    for(int i = 0; i < n; i++)
    {
        string word;
        cin >> word;

        if(word.length() == 1)
            count++;
        else if(checkGroupWord(word))
            count++;
    }
    cout << count << endl;
    return 0;
}