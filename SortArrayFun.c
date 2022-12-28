#include<stdio.h>
void sortfun(int x[])
{
    int i,j,t=0;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(x[i]<x[j]){
            t=x[i];
            x[i]=x[j];
            x[j]=t;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",x[i]);
    }
}
int main()
{
    int a[10]={2,11,34,73,95,97,16,89,8,20};
    sortfun(a);

}
