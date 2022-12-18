#include<stdio.h>
int countdigit(int n)
{
    static int c=0;
    if(n==0)
        return c;
    else
        c++;
    return countdigit(n/10);
}
int main()
{
    printf("%d",countdigit(1978244));
    return 0;
}
