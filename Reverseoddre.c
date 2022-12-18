#include<stdio.h>
void  reodd(int n)
{
    if(n==0)
        return 1;

    printf("%d ",2*n-1);
    reodd(n-1);
}
int main()
{
    reodd(10);
    return 0;
}
