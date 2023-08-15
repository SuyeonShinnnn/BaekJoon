#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int* scores = new int[n];
    for(int i = 0; i < n; i++)//성적 입력 받기
        cin >> scores[i];
    
    sort(scores, scores + n);

    cout << scores[n - k] << endl;
}