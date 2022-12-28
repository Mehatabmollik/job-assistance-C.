#include<stdio.h>
int main()
{
    int a[10]={9,8,67,99,5,34,3,2,1,0},i,b[10];
    for(i=0;i<10;i++)
    {
        b[i]=a[i];
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
