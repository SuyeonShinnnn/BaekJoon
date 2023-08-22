#include <iostream>
using namespace std;

int main()
{
    int c;
    cin >> c;

    for(int i = 0; i < c; i++)
    {
        int n;
        cin >> n;

        double avg = 0;
        int* scores = new int[n];

        for(int j = 0; j < n; j++)
        {
            cin >> scores[j];
            avg += scores[j];
        }
        avg = avg / n;

        int count = 0;
        for(int j = 0; j < n; j++)
            if(avg < scores[j])
                count++;

        double per = (double)count * 100 / (double)n;
        cout << per << '%' << endl;
    }
}