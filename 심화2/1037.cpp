#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int* aliquot = new int[n];
    for(int i = 0; i < n; i++)
        cin >> aliquot[i];

    sort(aliquot, aliquot + n);

    cout << aliquot[0] * aliquot[n - 1] << endl; 
}