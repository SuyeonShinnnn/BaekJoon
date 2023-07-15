#include <stdio.h>

int main()
{
    int score;
    char grade;

    scanf("%d", &score);

    if(score<=100&&score>=90)
        grade = 'A';
    else if(score<=89&&score>=80)
        grade = 'B';
    else if(score<=79&&score>=70)
        grade = 'C';
    else if(score<=69&&score>=60)
        grade = 'D';
    else
        grade = 'F';

    printf("%c\n", grade);

    return 0;
}