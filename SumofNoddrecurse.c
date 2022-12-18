#include<stdio.h>
int sumodd(int n)
{
    int s;
    if(n==0)
        return 0;
    s=n*2-1+sumodd(n-1);
    return s;
}
int main()
{
    int k;
    k=sumodd(5);
    printf("sum of first n odd no: %d",k);
    return 0;
}
