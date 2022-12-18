#include<stdio.h>
void square(int n)
{
    if(n==0)
        return 1;
    square(n-1);
    printf("%d ",n*n);
}
int main()
{
    square(10);
    return 0;
}

