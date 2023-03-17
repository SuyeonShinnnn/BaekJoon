#include <stdio.h>

int main()
{
    int h, m;

    scanf("%d %d", &h, &m);

    if(m>=45&&m<=59)
        m-=45;
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