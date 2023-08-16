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

    for(int i = 0; i < s.length(); i++)
        number[i] = s[i] - 48;

    sort(number, number + s.length(), greater<>());

    for(int i = 0; i < s.length(); i++)
        cout << number[i];
    cout << endl;

    return 0;
}