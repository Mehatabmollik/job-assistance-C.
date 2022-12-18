#include<stdio.h>
int sumsquare(int n)
{
    int s;
    if(n==0)
        return 0;
    s=n*n+sumsquare(n-1);
    return s;
}
int main()
{
    int k;
    k=sumsquare(5);
    printf("sum of first n even no:%d",k);
    return 0;
}
