#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    set<int> setA;
    set<int> setB;
    set<int> setC;

    int sizeA, sizeB;
    cin >> sizeA >> sizeB;

    for(int i = 0; i < sizeA; i++)
    {
        int a;
        cin >> a;
        setA.insert(a);
    }
    for(int i = 0; i < sizeB; i++)
    {
        int b;
        cin >> b;
        setB.insert(b);
    }
    set_difference(setA.begin(), setA.end(), setB.begin(), setB.end(), inserter(setC, setC.begin()));
    set_difference(setB.begin(), setB.end(), setA.begin(), setA.end(), inserter(setC, setC.begin()));
    
    cout << setC.size() << endl;

    return 0;
}