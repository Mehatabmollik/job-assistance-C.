#include<stdio.h>
void odd(int n)
{
    if(n==0)
        return 1;
    odd(n-1);
    printf("%d ",2*n-1);
}
int main()
{
    odd(10);
    return 0;
}
