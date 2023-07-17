#include <stdio.h>
#include <malloc.h>

int main()
{
    int n, a, count =0;
    scanf("%d", &n);

    int* v = (int*)malloc(sizeof(int)*n);

    for(int i=0;i<n;i++)
    {
        scanf("%d", &v[i]);
    }
    scanf("%d", &a);

    for(int i=0;i<n;i++)
    {
        if(v[i]==a)
            count++;
    }
    printf("%d\n", count);

    return 0;
}