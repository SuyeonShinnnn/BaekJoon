#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s = to_string(n);

    int* number = new int[s.length()];

    //string -> int
    for(int i = 0; i < s.length(); i++)
        number[i] = s[i] - 48;
    
    //내림차순 정렬
    sort(number, number + s.length(), greater<>());

    //출력
    for(int i = 0; i < s.length(); i++)
        cout << number[i];
    cout << endl;

    return 0;
}