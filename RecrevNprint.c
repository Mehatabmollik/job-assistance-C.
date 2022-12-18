#include<stdio.h>
void reprint(int n)
{
    if(n==0)
        return;

    printf("%d ",n);
    reprint(n-1);
}
int main()
{
    reprint(10);
    return 0;
}
