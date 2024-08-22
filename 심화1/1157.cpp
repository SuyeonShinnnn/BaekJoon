#include <iostream>
#include <set>
using namespace std;

typedef struct Word
{
    char alphabet;
    int count = 0;
}Word;
int main()
{
    set<char> s;
    string text;
    cin >> text;

    for(int i = 0; i < text.length(); i++)//소문자 -> 대문자 && 알파벳 중복 없애기 위해 set에 insert
    {
        text[i] = toupper(text[i]);
        s.insert(text[i]);
    }

    Word* w = new Word[s.size()];//알파벳 수만큼 구조체 생성

    int i = 0;
    //구조체에 알파벳 저장
    for(set<char>::iterator iter = s.begin(); iter != s.end(); iter++)
    {
        w[i].alphabet = *iter;
        i++;
    }

    //text에 저장된 알파벳 수 count
    for(int i = 0; i < s.size(); i++)
    {
        for(int j = 0; j < text.length(); j++)
        {
            if(w[i].alphabet == text[j])
                w[i].count++;
        }
    }

    int max = 0, index;
    //알파벳 수가 젤 많은 문자 찾기
    for(int i = 0; i < s.size(); i++)
    {
        if(max < w[i].count)
        {
            max = w[i].count;
            index = i;
        }
    }
    //알파벳 최대 개수가 여러 개일 때 '?'출력
    for(int i = 0; i < s.size(); i++)
        if(max == w[i].count && index != i)
        {
            cout << '?' << endl;
            return 0;
        }
    
    cout << w[index].alphabet << endl;

    return 0;
}