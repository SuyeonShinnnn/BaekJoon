#include <iostream>
using namespace std;

void swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int main()
{
    int n, m;
    cin >> n >> m;

    int* basket = new int[n+1];
    for(int i=1;i<n+1;i++)
        basket[i] = i;

    for(int i=0;i<m;i++)
    {
        int a, b;
        cin >> a >> b;

        swap(basket[a], basket[b]);
    }

    for(int i=1;i<=n;i++)
        cout << basket[i] << ' ';
    cout << endl;

    return 0;
}