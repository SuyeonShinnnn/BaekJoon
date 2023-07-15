#include <stdio.h>
#include <malloc.h>

int main()
{
    int time = 0;

    scanf("%d", &time);

    int a, b;
    int *sum = (int*)malloc(sizeof(int)*time);

    for(int i=0;i<time;i++)
    {
        scanf("%d %d", &a,&b);
        sum[i] = a+b;
    }
    
    for(int i=0;i<time;i++)
        printf("%d\n",sum[i]);

    free(sum);
    
    return 0;
}