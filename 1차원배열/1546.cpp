#include <iostream>
using namespace std;

int main()
{
    int n;
    double sum=0, max=0;
    cin >> n;

    double* score = new double[n];
    for(int i=0; i<n; i++)
    {
        cin >> score[i];
        if(max < score[i])
            max = score[i];
    }
    for(int i=0; i<n; i++)
    {
        sum = sum + (score[i]/max)*100;
    }
    
    cout << sum/n << endl;
    
    return 0;
}