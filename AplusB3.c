#include <stdio.h>
#include <malloc.h>

int main()
{
    int t;
    
    scanf("%d", &t);
    int* a = (int*)malloc(sizeof(int)*t);
    int* b = (int*)malloc(sizeof(int)*t);
    int* sum = (int*)malloc(sizeof(int)*t);

    for(int i=0;i<t;i++)
    {
        scanf("%d %d", &a[i], &b[i]);
        sum[i]=a[i]+b[i];
    }
    for(int i=0;i<t;i++)
        printf("Case #%d: %d + %d = %d\n", i+1, a[i], b[i], sum[i]);
    return 0;
}