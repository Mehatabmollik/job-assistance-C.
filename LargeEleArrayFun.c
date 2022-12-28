#include<stdio.h>
int findmx(int x[])
{
    int i,max=x[0];
    for(i=0;i<10;i++)
    {
        if(max<x[i])
        {
            max=x[i];
        }
    }
    return max;
}
int main()
{
    int c,a[10]={1,2,3,4,5,6,7,8,9,10};
    c=findmx(a);
    printf("Great no is %d",c);
    return 0;
}
