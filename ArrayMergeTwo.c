#include<stdio.h>
int main()
{
    int a[]={2,4,6,7,9};
    int b[]={5,8,9,10,12};
    int c[10],i,j,k=0;
    for(i=0,j=0;i<5 && j<5;k++)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
        }else{
            c[k]=b[j];
            j++;

        }
    }

        if(i==5 && j!=5)
        {
            for(;j<5;j++)
            {
                c[k++]=b[j];
            }
        }
        if(j==5 && i!=5)
        {
            for(;i<5;i++)
            {
                c[k++]=b[i];
            }
        }

    for(i=0;i<10;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}
