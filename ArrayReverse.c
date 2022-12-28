#include<stdio.h>
int main()
{
    int a[10]={1,3,2,4,6,8,7,0,9,5},i,t;
    for(i=0;i<10/2;i++)
    {
        t=a[i];
        a[i]=a[10-i-1];
        a[10-i-1]=t;
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
