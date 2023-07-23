#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int* basket = new int[n];

    for(int i=0; i<m; i++)
    {
        int start, end, ballNum;
        cin >> start >> end >> ballNum;

        for(int j=start; j<=end; j++)
            basket[j-1] = ballNum;
    }
    for(int i=0; i<n; i++)
        cout << basket[i] << ' ';
    cout << endl;

    return 0;
}