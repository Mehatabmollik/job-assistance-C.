#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,sum=0;
    float avg=0;

    printf("Enter value of n:\n");
    scanf("%d",&n);

    int *p,i;

    p=(int *)calloc(n,sizeof(int));

    printf("Enter %d values:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }

    for(i=0;i<n;i++)
    {
        sum=sum+ *(p+i);
    }
    avg=sum/n;
    printf("Avg is =%f",avg);

    free(p);
    return 0;
}
