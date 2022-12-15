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
int permu(int n, int r)
{
    return fact(n)/(fact(n-r));
}
int main()
{
    printf("Permutation is %d",permu(10,2));
    return 0;
}
