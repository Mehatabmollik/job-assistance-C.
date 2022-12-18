#include<stdio.h>
int sum(int n)
{
    int s;
    if(n==0)
        return 0;
    s=n+sum(n-1);
    return s;
}
int main()
{
    int k;
    k=sum(5);
    printf("sum of first n %d",k);
    return 0;
}
