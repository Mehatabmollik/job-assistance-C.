#include<stdio.h>
int findmin(int x[])
{
    int i,min=x[0];
    for(i=0;i<10;i++)
    {
        if(min>x[i])
        {
            min=x[i];
        }
    }
    return min;
}
int main()
{
    int c,a[10]={1,2,3,4,5,6,7,8,9,10};
    c=findmin(a);
    printf("Small no is %d",c);
    return 0;
}

