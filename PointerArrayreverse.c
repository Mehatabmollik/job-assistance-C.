#include<stdio.h>
void reverse(int *p,int s)
{
    int i,j,t;
    for(i=0;i<s-1;i++)
    {
        for(j=i+1;j<s;j++)
        {
            t=p[i];
            p[i]=p[j];
            p[j]=t;
        }
    }
}
int main()
{
    int i,a[]={6,2,4,1,4,3,7,9,5,8};
    int *p=a;
    reverse(a,10);
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
   return 0;
}
