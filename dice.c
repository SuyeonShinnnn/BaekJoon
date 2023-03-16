#include <stdio.h>

int main()
{
    int a, b, c;
    int sum;

    scanf("%d %d %d", &a, &b, &c);

    if(a==b&&b==c)
        sum = 10000+a*1000;
    else if((a!=b)&&(a!=c)&&(b!=c))
    {
        if(a>b&&a>c)
            sum = a*100;
        else if(b>a&&b>c)
            sum = b*100;
        else
            sum = c*100;
    }
    else
    {
        if(a==b||a==c)
            sum = 1000+a*100;
        else
            sum = 1000+b*100;
    }
    printf("%d\n", sum);

    return 0;
}