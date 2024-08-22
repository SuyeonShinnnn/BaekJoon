#include <iostream>
using namespace std;

double gradeCal(double credit, string grade)
{
    double score;
    if(grade.compare("A+") == 0)
        score = 4.5 * credit;
    else if(grade.compare("A0") == 0)
        score = 4.0 * credit;
    else if(grade.compare("B+") == 0)
        score = 3.5 * credit;
    else if(grade.compare("B0") == 0)
        score = 3.0 * credit;
    else if(grade.compare("C+") == 0)
        score = 2.5 * credit;
    else if(grade.compare("C0") == 0)
        score = 2.0 * credit;
    else if(grade.compare("D+") == 0)
        score = 1.5 * credit;
    else if(grade.compare("D0") == 0)
        score = 1.0 * credit;
    else if(grade.compare("F") == 0)
        score = 0.0 * credit;
    return score;
}
int main()
{
    double sum = 0;
    double sumGrade = 0;
    for(int i = 0; i < 20; i++)
    {
        string subject, grade;
        double credit;
        cin >> subject >> credit >> grade;

        if(grade.compare("P") != 0)
        {
            sum += gradeCal(credit, grade);
            sumGrade += credit;
        }
    }
    cout << sum / sumGrade << endl;
}