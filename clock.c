#include <stdio.h>

int main()
{
    int h, m;

    scanf("%d %d", &h, &m);

    if(m>=45)
        m-=m;
    else
    {
        if(h==0)
            h=23;
        else
            h-=1;
        m+=15;
    }
    printf("%d %d\n", h, m);

    return 0;
}