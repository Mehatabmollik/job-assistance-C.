#include<stdio.h>
void unique(int x[],int s)
{
    int i;
    int h[100]={0};
    for(i=0;i<s;i++)
    {
        h[x[i]]++;
    }
    for(i=0;i<100;i++)
    {
        if(h[i]==1)
        {
            printf("%d--->%d\n",i,h[i]);
        }
    }
}
int main()
{
    int a[10]={2,1,3,2,4,5,4,5,7,9};
    unique(a,10);
    return 0;
}
