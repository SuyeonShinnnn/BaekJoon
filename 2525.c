#include <stdio.h>

int main()
{
    int h, m;
    int cooking_time;

    scanf("%d %d", &h, &m);
    scanf("%d", &cooking_time);

    if(cooking_time>=60)
    {
        int h2 = cooking_time/60;
        int m2 = cooking_time%60;

        h+=h2;
        m+=m2;
    }
    else
        m+=cooking_time;
    if(m>=60)
    {
        m-=60;
        h+=1;
    }
    if(h>=24)
            h%=24;
    printf("%d %d\n", h, m);

    return 0;
}