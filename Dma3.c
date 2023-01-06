#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,sum=0;

    printf("Enter value of n:\n");
    scanf("%d",&n);

    int *p;

    p=(int *)malloc(n*sizeof(int));

    printf("Enter %d no:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",p+i);

    for(i=0;i<n;i++)
        sum=sum + *p+i;

    printf("Sum of all no %d \n",sum);
    free(p);
    return 0;
}
