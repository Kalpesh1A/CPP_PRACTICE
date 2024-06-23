#include<stdio.h>
#include<stdlib.h>
//we use it to free memeory that is allocated  using malloc & calloc.
// free(ptr);
int main()
{
    int *ptr;
    int n,i;
    printf("\n enter n:");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("\n%d",ptr[i]);
    }
    free(ptr);
    ptr=(int *)calloc(2,sizeof(int));
    for(i=0;i<2;i++)
    {
        printf("\n%d",ptr[i]);
    }
    




    return 0;
}
