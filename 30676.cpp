#include <iostream>
using namespace std;

int main()
{
    int nm;
    cin >> nm;

    string color;

    if(nm >= 620 && nm <= 780)
        color = "Red";
    else if(nm >= 590 && nm < 620)
        color = "Orange";
    else if(nm >= 570 && nm < 590)
        color = "Yellow";
    else if(nm >= 495 && nm < 570)
        color = "Green";
    else if(nm >= 450 && nm < 495)
        color = "Blue";
    else if(nm >= 425 && nm < 450)
        color = "Indigo";
    else if(nm >= 380 && nm < 425)
        color = "Violet";
    
    cout << color << endl;
}