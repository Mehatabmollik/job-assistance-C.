#include<stdio.h>
void firstsame(int x[],int s)
{
    int i;
    int h[100]={0};
    for(i=0;i<s;i++)
    {
        h[x[i]]++;
    }
    for(i=0;i<100;i++)
    {
        if(h[i]==2)
        {
            printf("%d--->%d",i,h[i]);
            break;
        }
    }
}
int main()
{
    int a[]={1,2,3,3,4,6,2,7,8,8};
    firstsame(a,10);
    return 0;
}
