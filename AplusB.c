#include <stdio.h>
#include <malloc.h>

int main()
{
    int t;
    int a, b;

    scanf("%d", &t);
    int* sum = (int*)malloc(sizeof(int)*t);

    for(int i=0;i<t;i++)
    {
        scanf("%d %d", &a, &b);
        sum[i]=a+b;
    }
    for(int i=0;i<t;i++)
        printf("%d\n", sum[i]);
    return 0;
}