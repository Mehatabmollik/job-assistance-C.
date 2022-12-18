#include<stdio.h>
int sumeven(int n)
{
    int s;
    if(n==0)
        return 0;
    s=n*2+sumeven(n-1);
    return s;
}
int main()
{
    int k;
    k=sumeven(5);
    printf("sum of first n even no:%d",k);
    return 0;
}

