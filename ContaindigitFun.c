#include<stdio.h>
int digit(int d,int n)
{
    while(n)
    {
        if(n%10==d)
            return 1;
        n=n/10;
    }
    return 0;
}
int main()
{
    if(digit(6,167))
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
