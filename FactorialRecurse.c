#include<stdio.h>
int fact(int n)
{
    if(n==0||n==1)
        return 1;
    return n*fact(n-1);
}
int main()
{
    int f;
    f=fact(5);
    printf("Factorial is :%d",f);
    return 0;
}
