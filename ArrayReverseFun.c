#include<stdio.h>
void revfun(int x[],int s)
{
    int i,t;
    for(i=0;i<s/2;i++)
    {
        t=x[i];
        x[i]=x[s-1-i];
        x[s-1-i]=t;
    }
    for(i=0;i<s;i++)
    {
        printf("%d ",x[i]);
    }
}
int main()
{
    int a[15],i;
    printf("Enter 15 no for reverse:");
    for(i=0;i<15;i++)
        scanf("%d",&a[i]);
    revfun(a,15);
    return 0;
}
