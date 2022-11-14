#include<stdio.h>

int main()
{
    int a=0,b=1,n,c,i;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("Fibonacci is =%d \n nth term =%d",b,n);
    return 0;
}
