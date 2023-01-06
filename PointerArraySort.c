#include<stdio.h>
void sort(int *ptr,int s)
{
    int i,j,t;
    for(i=0;i<s-1;i++)
    {
        for(j=i+1;j<s;j++)
        {
            if(ptr[i]>ptr[j])
            {
             t=ptr[i];
             ptr[i]=ptr[j];
             ptr[j]=t;
            }
        }
    }
}
int main()
{
    int i,a[]={3,5,2,6,1,8,7,9,4,10};
    sort(a,10);
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    return 0;
}
