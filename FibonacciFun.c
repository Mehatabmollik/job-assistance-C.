#include<stdio.h>
void fibo(int n)
{
    int i,a= 0,b=1,c;
     for(i=2;i<n;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}
int main()
{
    int a;
    printf("Enter a no for Fibonacci:\n");
    scanf("%d",&a);
    fibo(a);
    return 0;
}

