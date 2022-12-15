#include<stdio.h>
int fact(int);
int main()
{
    int n,a;
    printf("Enter the number:");
    scanf("%d",&n);
    a=fact(n);
    printf("Factorial is=%d",a);
    return 0;

}

int fact(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;

}

