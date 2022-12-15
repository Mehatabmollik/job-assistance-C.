#include<stdio.h>
int fact(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;

}
int comb(int n, int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}
int main()
{
    printf("Combination is %d",comb(10,2));
    return 0;
}
