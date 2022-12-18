#include<stdio.h>
int sumofdigit(int n)
{
    int s;
    if(n%10==n)
        return n;
    return ((n%10)+sumofdigit(n/10));
}
int main()
{
    int k;
    k=sumofdigit(5865);
    printf("sum of digit no:%d",k);
    return 0;
}

